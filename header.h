/** 
* Original Author: Jonathan Lam
* Created: 2023/02/16  
* Last Updated by: Jonathan Lam
* Contact information: jonathanlam10@csu.fullerton.edu
* File Purpose: Holds all the classes and functions
* Description: Classes and Functions for the Analyzers of a Compiler
**/ 

#ifndef HEADER_H_
#define HEADER_H_

//Lexica Anaylzer Functions
Class LA{
    public:
        LexicalAnalyzer(string);
        Tokenizer(string);

    private:
    string input_string(string);
    char current_char(char);
}


//Syntax Analyzer Functions
Class SA {
public:
char get_token_stream(string)
int convert_to_syntax_tree(char)
char return_syntax_tree(string)

private:

}

#endif