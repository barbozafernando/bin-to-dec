#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char *argv[]) {
  const char *value = argv[1];
  size_t length = strlen(value) - 1;
  size_t final_array[strlen(value)];
  int decimal = 0;

  if (argc != 2) {
    usage();
    return EXIT_FAILURE;
  }

  if (is_valid_binary(value) != 1) {
    printf("<bin-to-dec> error: invalid binary");
    return EXIT_FAILURE;
  }

  for(int i = 0; i < strlen(value); i++) {
    int acc = 0;
    int bit = value[i] - '0'; // convert string into int
    int result = 0;
    int *ptr_result;

    ptr_result = &result;

    *ptr_result = bit * power(2, length);

    if (*ptr_result == 0) {
      *ptr_result = power(2, length);
    }

    acc = *ptr_result * bit;
    final_array[i] = acc;

    if (length != 0) {
      length--;
    }
  }

  size_t final_array_length = (sizeof(final_array) / sizeof(final_array[0]));

  for(int i = 0; i < final_array_length; i++) {
    decimal += final_array[i];
  }

  printf("%d\n", decimal);
  return EXIT_SUCCESS;
}

