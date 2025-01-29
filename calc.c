#include <string.h>

#include "calc.h"

long long b2d_convert(char* binary, size_t treat_as_signed) {
    size_t binary_len = strlen(binary);
    long long MASK    = 1LL << (binary_len - 1);
    long long result  = 0;

    for(size_t i = 0; i < binary_len; i++) {
        result = result * 2 + (binary[i] - 48);
    }

    if (treat_as_signed == 1 && (result & MASK)) {
        return result * -1;
    }

    return result;
}
