#include <stdio.h>
#include <stdlib.h>
#include "utils.c"

#define BINARY_LENGTH strlen(binary)

int convert(char *binary) {
  size_t temp = BINARY_LENGTH - 1;
  size_t final_array[BINARY_LENGTH];
  int decimal = 0;

  for(int i = 0; i < strlen(binary); i++) {
    int acc, result = 0;
    int *result_ptr = &result;
    int bit = binary[i] - '0'; // convert string into int

    *result_ptr = bit * power(2, temp);

    if (*result_ptr == 0) {
      *result_ptr = power(2, temp);
    }

    acc = *result_ptr * bit;
    final_array[i] = acc;

    if (temp != 0) {
      temp--;
    }
  }

  for(int i = 0; i < BINARY_LENGTH; i++) {
    decimal += final_array[i];
  }

  return decimal;
}
