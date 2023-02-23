/**
* Original Author: Long Calamia
* Created: 2023/02/16
* Last Updated by: Long Calamia
* Contact information: long93933@gmail.com
* Purpose of this file: Implement a lexical analyzer to take input source code and output token stream.

* Lists of variables for LA class:
    Private:
        string  input_string (used for accepcting input from source code),
        char current_char(used for storing current character to analyze whether it is a part of a token)
    Pubic:
        LexicalAnalyzer() - consturctor function used to init input_string,
        Tokenizer() - used for parsing the source code into seperate tokens to be process by syntax analyzer
* (c) Copyright/license info
**/
#include <iostream>
#include <string>
using namespace std;
class LA
{
public:
    LA() {}

    // Tokenize the input string
    string Tokenizer() {}

private:
    string input_;
    char current_character_;
};
