# Mathematical-Expressions-Interpreter

## Introduction

This project implements a lexical analyzer and an expression evaluator for mathematical expressions based on a deterministic finite automaton (DFA) and syntax analysis. The code is organized into multiple files, each playing a specific role in the process of analyzing and evaluating expressions.

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

3. Enter mathematical expressions to evaluate and observe the displayed results.

4. To exit the program, use the specified exit command (e.g., "q" or "Q").

## Authors

- Amayes DJERMOUNE
- Yao HIPPOLYTE

