#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef LEXER_H_INCLUDED
#define LEXER_H_INCLUDED

enum TokenType {
  ID, // integer token, literally identification, like main or sqrt
  INT, // integer
  RTRN_KEY, // return keyword, literally "return"
  INTKEY, // integer keyword, literally "int"
  RBRACKET, // right bracket
  LBRACKET, // left bracket
  LPAREN, // left parentheses
  RPAREN, // right parentheses
  SEMICOLON, // semi colon
  END // end of file token, end of token array
};

/*
* A token constists of a type, the string its derived from, and line/column number (for better error messages)
*/

struct Token {
  enum TokenType type;
  char string[10];
};

struct Token* lex(FILE *file);

#endif