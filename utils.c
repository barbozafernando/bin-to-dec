#include <stdio.h>
#include <string.h>
#include <stdint.h>

uint16_t power(size_t base, size_t exp) {
  int result = 1;

  for (exp; exp > 0; exp--){
    result = result * base;
  }

  return result;
}

void fatal(char *msg) {
  fprintf(stderr, "<bin-to-dec> Error: %s\n", msg);
  exit(1);
}

uint8_t is_valid_binary(char *binary) {
  for(size_t i = 0; i < strlen(binary); i++) {
    char *bit = &binary[i];

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

