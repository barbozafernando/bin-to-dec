#include "calc.h"

long long power_of_two(long long exp) {
  long long result = 1;

  for (; exp > 0; exp--){
    result = result << 1;
  }

  return result;
}

long long convert(char* binary) {
  size_t binary_len = strlen(binary);
  long long temp = binary_len - 1;
  long long final_array[binary_len];
  long long decimal = 0;

  for(size_t i = 0; i < binary_len; i++) {
    long long acc, result = 0;
    long long *p_result = &result;
    long long bit = binary[i] - 48;

    *p_result = bit * power_of_two(temp);

    if (*p_result == 0) {
      *p_result = power_of_two(temp);
    }

    acc = *p_result * bit;
    final_array[i] = acc;

    if (temp != 0) {
      temp--;
    }
  }

  for(size_t i = 0; i < binary_len; i++) {
    decimal += final_array[i];
  }

  return decimal;
}
