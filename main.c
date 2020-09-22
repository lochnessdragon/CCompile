#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void usage();

int main(int argc, char *argv[]) {
  char* assembly = ".globl main"
                    "main:"
                    "  movl    ${}, %eax"
                    "  ret";
  
  if(argc < 2) {
    fprintf(stderr, "No source file provided\n");
    usage();
    exit(EXIT_FAILURE);
  } else {
    printf("Compiling source file: %s\n", argv[1]);
  }

  FILE *file;

  file = fopen(argv[1], "r");

  if(file == NULL) {
    fprintf(stderr, "File not found.");
    exit(EXIT_FAILURE);
  }

  fclose(file);

  return 0;
}

void usage() {
  printf ("CCompile Usage:\n");
  printf ("  ccompile source_file\n");
}