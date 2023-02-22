/** 
* Original Author: Hoang Nguyen (Kyle)
* Created: 2023/02/19  
* Last Updated by: Hoang Nguyen (kyle) 
* Contact information: hnguyen1193@csu.fullerton.edu
*
* Purpose: 
*       Semantic Analyzer respondsible for checking the declaration and the statements of program
*       are semantically correct. It collect all the procedures which is called parser as and when
*       required by grammar. Both syntax tree of previous phase and symbol table. Semantic Analyzer
*       requires both syntax tree of previous phase and symbol table are used to check the consistency
*       of the given code. Therefore Type Check is an crucial process of semantic analysis where compiler
*       make sure that each operator has matching operands.
*
*
*
* Description of Classes, Functions, etc. in the file.
*       Class and Description: 
*               Semantic Analyzer use the syntax and symbol table to check whether the given program 
*               is semantically coherent with language definition. It gethers type information and stores
*               it in either syntax tree or symbol table. This type information is subsequently used by
*               compiler during intermediate-code generation.           
*
*
*
*       Funtions of Semantic Analysis:
*               1. Type Checking : Ensures data types are used in a way consistent with their definition
*
*               2. Label Checking : a program should contain labels references.
*
*               3. Flow control check : Keeps a check that control structures are used in a proper 
*               manner (example : no break statement outside a loop) 
*
*
*
*
*
*
*
*
*
*
*
*
* * (c) Copyright/license info 
**/