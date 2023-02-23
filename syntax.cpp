/**
* Original Author: Nathan Nguyen
* Created: 2023/02/16
* Last Updated by: Kyle Dang
* Contact information: nathannn702@gmail.com, dangkyle@csu.fullerton.edu
* Purpose of this file - Syntax Analyzer that prases through and identify tokens and output a syntax tree
* public variable token_string; will be used to store the token string value from the get_token_stream function
* public variable syntax_tree; will be used to store the result syntax tree to be returned 
* char get_token_stream(string) - will take the value of token stream from lexical.cpp 
* int convert to syntax_tree(char) - will convert the token stream value stored into a syntax tree 
* char return_syntax_tree(string) - returns the syntax tree back to where function was called for use
* (c) Copyright/license info
**/ 

#include <iostream>
#include <string>

class SynA {

    public:
        std::string token_string;

    private:
    
};

//Prototypes 
char get_token_stream(std::string token_string);
char convert_to_syntax_tree(char token);

// takes token_stream from lexical.cpp and stores in variable 
char get_token_stream(std::string token_string) {

    char token = 'a';
    return token;

}

// converts token_stream input argument into a syntax tree
// returns the finished syntax tree 
char convert_to_syntax_tree(char token) {

    char syntax_tree_result;

    // convert token to syntax tree here 

    return syntax_tree_result;

}

