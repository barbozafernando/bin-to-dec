#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "calc.h"

void fatal(char* msg) {
  fprintf(stderr, "<bin2dec> Error: %s\n", msg);
  exit(1);
}

int is_valid_binary(char* binary) {
  for(size_t i = 0; i < strlen(binary); ++i) {
    if (binary[i] != '0' && binary[i] != '1') {
      return 0;
    }
  }

  return 1;
}

void usage() {
  printf("USAGE: ./bin2dec <binary>");
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    usage();
    exit(1);
  }
  
  char* value = argv[1];

  if (!is_valid_binary(value)) {
    fatal("Invalid binary");
    usage();
  }

  long long result = convert(value);

  fprintf(stdout, "%lld\n", result);

  return 0;
}

