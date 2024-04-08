# Compiler et exécuter le projet IFCC

Ce projet est un compilateur simple écrit en C++ utilisant ANTLR pour la génération de lexer et de parser. Le compilateur prend en charge les architectures x86 et ARM comme cibles de compilation.

## Prérequis

Avant de compiler et d'exécuter ce projet, assurez-vous d'avoir les éléments suivants installés sur votre système :

- ANTLR (version 4.x)
- Un compilateur C++ (par exemple, g++)
- GNU Make

## Compilation

1. Assurez-vous que le fichier `ifcc.g4` est présent dans le répertoire du projet.
2. Utilisez Make pour compiler le projet et générer les fichiers né en exécutant la commande suivante :

    ```bash
    make
    ```

## Exécution

Après avoir compilé le projet avec succès, vous pouvez exécuter le compilateur IFCC en utilisant la commande suivante :

```bash
./ifcc --target=<architecture> path/to/file.c
```

## Tests

Pour exécuter les tests, il suffit d'utiliser la commande suivante : 
```bash
python3 ifcc-test.py --target=<architecture> path/to/file.c
```