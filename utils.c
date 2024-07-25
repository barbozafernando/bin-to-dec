#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

long long power(size_t base, size_t exp) {
  long long result = 1;

  for (; exp > 0; exp--){
    result = result * base;
  }

  return result;
}

void fatal(char *msg) {
  fprintf(stderr, "<bin-to-dec> Error: %s\n", msg);
  exit(1);
}

long long is_valid_binary(char *binary) {
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

