#include <stdio.h>

#ifndef LOGGING_H_INCLUDED
#define LOGGING_H_INCLUDED

//#define ERROR_START printf(“\033[0;31m”);
//#define ERROR_END printf(“\033[0m”);

void error_code() {
  printf("\033[0;31m");
}

void success_code() {
  printf("\033[0;32m");
}

void reset_color() {
  printf("\033[0m");
}


#endif