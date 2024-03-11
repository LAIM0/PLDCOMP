#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <getopt.h> // Include for getopt_long

#include "antlr4-runtime.h"
#include "generated/ifccLexer.h"
#include "generated/ifccParser.h"
#include "generated/ifccBaseVisitor.h"

#include "CodeGenVisitor.h"
#include "VariableVisitor.h"

using namespace antlr4;
using namespace std;

int main(int argc, const char **argv)
{
    stringstream in;
    string filename;
    string target_architecture;

    // Vérifiez le nombre d'arguments
    if (argc != 3) {
        cerr << "Usage: ifcc --target=<arm|x86> path/to/file.c" << endl;
        exit(1);
    }

    // Analysez les arguments
    for (int i = 1; i < argc; ++i) {
        if (strncmp(argv[i], "--target=", 9) == 0) {
            target_architecture = argv[i] + 9; // Extrait l'architecture cible
            // Vérifiez que l'architecture cible est valide
            if (target_architecture != "x86" && target_architecture != "arm") {
                cerr << "Error: Invalid target architecture. Supported architectures are x86 and arm." << endl;
                exit(1);
            }
        } else {
            filename = argv[i]; // Obtient le nom du fichier à compiler
        }
    }

    // Vérifiez si l'architecture cible est spécifiée
    if (target_architecture.empty()) {
        cerr << "Error: Target architecture not specified." << endl;
        exit(1);
    }

    ifstream lecture(filename);
    if (!lecture.is_open()) {
        cerr << "Error: Unable to open file " << filename << endl;
        exit(1);
    }

    in << lecture.rdbuf();
    lecture.close();

  ANTLRInputStream input(in.str());

  ifccLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();

  ifccParser parser(&tokens);
  tree::ParseTree* tree = parser.axiom();

  if(parser.getNumberOfSyntaxErrors() != 0)
  {
      cerr << "error: syntax error during parsing" << endl;
      exit(1);
  }

  std::map<std::string, int> symbols;

  VariableVisitor variableVisitor;
  variableVisitor.visit(tree);
  symbols = variableVisitor.getSymbols();

  CodeGenVisitor v;
  v.setSymbols(symbols);
  // Passer l'architecture cible au visiteur
  v.setTargetArchitecture(target_architecture);
  v.visit(tree);

  return 0;
}
