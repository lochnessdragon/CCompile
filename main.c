#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <regex.h>
#include "include/lexer.h"
#include "include/logging.h"

void usage();

int main(int argc, char *argv[]) {
  char* assembly = ".globl main"
                    "main:"
                    "  movl    ${}, %eax"
                    "  ret";
  
  if(argc < 2) {
    error_code();
    printf("No source file provided\n");
    reset_color();

    usage();
    exit(EXIT_FAILURE);
  } else {
    success_code();
    printf("Compiling source file: %s\n", argv[1]);
  }

  FILE *file;

  file = fopen(argv[1], "r");

  if(file == NULL) {
    error_code();
    printf("File not found.\n");
    reset_color();
    exit(EXIT_FAILURE);
  }
  
  struct Token * tokenList;
  tokenList = lex(file);

  fclose(file);

  printf("First Token: %d : %s\n", tokenList[0].type, tokenList[0].string);

  free(tokenList);

  exit(EXIT_SUCCESS);
}

void usage() {
  printf ("CCompile Usage:\n");
  printf ("  ccompile source_file\n");
}