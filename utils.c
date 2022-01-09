#include <stdio.h>
#include <string.h>
#include "utils.h"

size_t power(size_t base, size_t exp) {
  int result = 1;

  for (exp; exp > 0; exp--){
    result = result * base;
  }

  return result;
}

size_t is_valid_binary(const char *binary) {
  for(size_t i = 0; i < strlen(binary); i++) {
    const char *bit = &binary[i];

    if (strcmp(bit, "0") == 0 || strcmp(bit, "1") == 0) {
      return 1;
    }
  }

  return 0;
}

void usage() {
  printf("\n USAGE: ./bin-to-dec <binary number>");
  printf("It will convert the binary into decimal\n");
}
