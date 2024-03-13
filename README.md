# Mathematical-Expressions-Interpreter

## Introduction

This project implements a lexical analyzer and an expression evaluator for mathematical expressions based on a deterministic finite automaton (DFA) and syntax analysis.

## Project Contents

### Source Files

1. **calc.h and calc.c**:
   - Contains function declarations and constant definitions used in the program.
   - Key functions include `lexical_analysis`, `do_transition`, `verify_digit`, `verify_op`, and `contains`.

2. **lex.c**:
   - Implements the lexical analyzer based on a DFA.
   - Data structures: AFD Structure, Transition Structure.
   - Main functions: `lexical_analysis` and `do_transition`.
   - Auxiliary analysis functions: `verify_digit`, `verify_op`, and `contains`.

3. **syn.c**:
   - Handles syntax analysis and evaluation of mathematical expressions.
   - Data structures: AnalyseurSyntaxique, ArbreExpression.
   - Key functions: `tokenizer`, `analyser`, `calculer`, `afficherResultat`.
   - Syntax analysis auxiliary functions: `analyserExpressionAdditive`, `analyserExpressionMultiplicative`, `analyserExpressionAtomique`, and `analyserNombre`.
   - Main loop (main) and memory management functions (`creerArbreExpression` and `libererArbreExpression`).

### Grammaires.txt

   - File containing the grammar used for syntax analysis.

### README.md

   - This README file explains the project structure, included files, and provides an overview of the program's functionality.

## Usage

1. Compile the project using a C compiler compatible with your operating system.

2. Run the resulting program following the specific instructions for your system. 

```bash
cd src/
make 
make clean : Environment cleaning
```

3. Enter mathematical expressions to evaluate and observe the displayed results.

4. To exit the program, use the specified exit command "q".

## Authors

- Amayes DJERMOUNE 
- Yao HIPPOLYTE

# Interpréteur d'Expressions Mathématiques

## Introduction

Ce projet met en œuvre un analyseur lexical et un évaluateur d'expressions mathématiques basé sur un automate fini déterministe (AFD) et une analyse syntaxique.

## Contenu du Projet

### Fichiers Source

1. **calc.h et calc.c**:
   - Contient les déclarations de fonctions et les définitions de constantes utilisées dans le programme.
   - Les fonctions clés incluent `analyse_lexicale`, `do_transition`, `verify_digit`, `verify_op`, et `contains`.

2. **lex.c**:
   - Implémente l'analyseur lexical basé sur un AFD.
   - Structures de données : Structure AFD, Structure de Transition.
   - Fonctions principales : `analyse_lexicale` et `do_transition`.
   - Fonctions auxiliaires d'analyse : `verify_digit`, `verify_op`, et `contains`.

3. **syn.c**:
   - Gère l'analyse syntaxique et l'évaluation des expressions mathématiques.
   - Structures de données : AnalyseurSyntaxique, ArbreExpression.
   - Fonctions clés : `tokenizer`, `analyser`, `calculer`, `afficherResultat`.
   - Fonctions auxiliaires d'analyse syntaxique : `analyserExpressionAdditive`, `analyserExpressionMultiplicative`, `analyserExpressionAtomique`, et `analyserNombre`.
   - Boucle principale (`main`) et fonctions de gestion de la mémoire (`creerArbreExpression` et `libererArbreExpression`).

### Grammaires.txt

   - Fichier contenant la grammaire utilisée pour l'analyse syntaxique ainsi que sa table SLR.

### README.md

   - Ce fichier README explique la structure du projet, les fichiers inclus et donne un aperçu de la fonctionnalité du programme.

## Utilisation

1. Compilez le projet en utilisant un compilateur C compatible avec votre système d'exploitation.

2. Exécutez le programme résultant en suivant les instructions spécifiques à votre système.

```bash
cd src/
make : exécution 
make clean : Nettoyage de l'environnement
```

3. Saisissez des expressions mathématiques à évaluer et observez les résultats affichés.

4. Pour quitter le programme, utilisez la commande de sortie spécifiée "q" .

## Auteurs

- Amayes DJERMOUNE
- Yao HIPPOLYTE
