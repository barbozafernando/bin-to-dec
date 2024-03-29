#include <stdio.h>
#include <stdlib.h>
#include "calc.c"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    usage();
    exit(1);
  }
  
  char *value = argv[1];

  if (!is_valid_binary(value)) {
    fatal("Invalid binary");
  }

  int result = convert(value);

  printf("%d\n", result);
  return 0;
}

