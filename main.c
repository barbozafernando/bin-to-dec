#include <stdio.h>
#include <stdlib.h>
#include "lib/calc.c"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    usage();
    exit(1);
  }
  
  char *value = argv[1];
  int result = calculate(value);

  printf("%d\n", result);
  return 0;
}

