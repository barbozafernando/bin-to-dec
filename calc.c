#include "calc.h"

long long power_of_two(long long exp) {
    long long r = 1;

    for (; exp > 0; exp--)
      r = r << 1;

    return r;
}

long long convert(char* binary) {
    size_t binary_len = strlen(binary);
    long long temp = binary_len - 1;
    long long result = 0;

    for(size_t i = 0; i < binary_len; i++) {
      long long c = 1;
      long long bit = binary[i] - 48;

      c = bit * power_of_two(temp);

      if (c == 0)
        c = power_of_two(temp);

      result += c * bit;

      if (temp != 0)
        temp--;
    }

    return result;
}
