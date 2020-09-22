#include "../include/lexer.h"

struct Token* lex(FILE *file) {
  struct Token * tokens = calloc(10, sizeof(struct Token));

  tokens[0].type = INT;
  strcpy(tokens[0].string, "main");

  printf("%d\n", tokens[0].type);

  return tokens;
}