#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int power(int base, int exp);

int main(int argc, char *argv[]) {
  char *value = argv[1];
  size_t length = strlen(value) - 1;
  size_t final_array[strlen(value)];
  int result2 = 0;

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

    acc = bit * *ptr_result;
    final_array[i] = acc;

    if (length != 0) {
      length--;
    }
  }

  size_t length2 = sizeof(final_array) / sizeof(final_array[0]); 
  for(int i = 0; i < length2; i++) {
    result2 += final_array[i];
  }

  printf("%d\n", result2);
}

int power(int base, int exp) {
  int result = 1;

  for (exp; exp > 0; exp--){
    result = result * base;
  }

  return result;
}

