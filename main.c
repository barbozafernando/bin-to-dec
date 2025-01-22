#include <stdio.h>
#include <stdlib.h>

#include "calc.h"

void fatal(char* msg) {
  fprintf(stderr, "<bin-to-dec> Error: %s\n", msg);
  exit(1);
}

long long is_valid_binary(char* binary) {
  for(long long i = 0; i < (long long) strlen(binary); i++) {
    char* bit = &binary[i];

    if (strcmp(bit, "0") == 0 || strcmp(bit, "1") == 0) {
      return 1;
    }
  }

  return 0;
}

void usage() {
  printf("\n USAGE: \n\t./bin-to-dec <binary number>");
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    usage();
    exit(1);
  }
  
  char* value = argv[1];

  if (!is_valid_binary(value)) {
    fatal("Invalid binary");
  }

  long long result = convert(value);

  fprintf(stdout, "%lli\n", result);

  return 0;
}

