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
class LA {
    public:
        LexicalAnalyzer();
        string Tokenizer(string);

    private:
    string input_string;
    char current_char;
};


//Syntax Analyzer Functions
class SynA {
public:
    string token_string;
private:

};

char get_token_stream(string);
char convert_to_syntax_tree(char);
char get_token(string);
char convert_to_syntax_tree(char);


//Semantic Anylzer Functions
class SemA {
public:
char type_checking(string);
char label_checking(string);
int flow_control(string);

private:

}

#endif