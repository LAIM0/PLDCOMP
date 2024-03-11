#include "CodeGenVisitor.h"
#include "VariableVisitor.h"

antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
    std::cout<< "   .section   __TEXT,__text,regular,pure_instructions\n" ;
    std::cout<< "   .build_version macos, 14, 0	sdk_version 14, 2\n" ;
    std::cout<< "   .globl   _main\n" ;
    std::cout<< "   .p2align   2\n" ;
    std::cout<< "_main: \n" ;
    std::cout<< "   .cfi_startproc\n" ;
    std::cout<< "   sub	sp, sp, #" << memoryProg << "\n" ;
    std::cout<< "   .cfi_def_cfa_offset " << memoryProg << "\n" ;
    std::cout<< "   .str	wzr, [sp, #" << memoryProg - 4 << "]\n" ;
    
    visitChildren(ctx);
    std::cout<< "   add	sp, sp, #" << memoryProg << "\n";
    std::cout<< "   ret\n";
    std::cout<< "   .cfi_endproc\n";
    std::cout<< "   .subsections_via_symbols\n";

    return 0;
}

antlrcpp::Any CodeGenVisitor::visitAffectation(ifccParser::AffectationContext *ctx) {
    if (ctx->expr()->CONST() != nullptr)
    {
        int retval = stoi(ctx->expr()->CONST()->getText());
        std::cout << "   mov w8, #" << retval << "\n";
        std::cout << "   str w8, [sp, #" << SymbolTable[ctx->VAR()->getText()] << "] \n";
    }
    else if (ctx->expr()->VAR() != nullptr)
    {
        std::cout << "   ldr w8, [sp, #" << SymbolTable[ctx->expr()->VAR()->getText()] << "] \n";
        std::cout << "   str w8, [sp, #" << SymbolTable[ctx->VAR()->getText()] << "] \n";
    }
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *ctx) {
    if (ctx->expr()->CONST() != nullptr)
    {
        int retval = stoi(ctx->expr()->CONST()->getText());

        std::cout << "   mov w0, #" << retval << "\n";
    }
    else if (ctx->expr()->VAR() != nullptr)
    {
        std::cout << "   ldr w0, [sp, #" << SymbolTable[ctx->expr()->VAR()->getText()] << "]\n";
    }
    return 0;
}
