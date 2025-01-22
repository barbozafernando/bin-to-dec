#include "calc.h"

#define BINARY_LENGTH strlen(binary)

int power(size_t base, size_t exp) {
  long long result = 1;

  for (; exp > 0; exp--){
    result = result * base;
  }

  return result;
}

long long convert(char* binary) {
  long long temp = BINARY_LENGTH - 1;
  long long final_array[BINARY_LENGTH];
  long long decimal = 0;

  for(long long i = 0; i < (long long)strlen(binary); i++) {
    long long acc, result = 0;
    long long *result_ptr = &result;
    long long bit = binary[i] - '0'; // convert string into int

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

  for(size_t i = 0; i < BINARY_LENGTH; i++) {
    decimal += final_array[i];
  }

  return decimal;
}
