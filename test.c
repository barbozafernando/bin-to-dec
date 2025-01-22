#include <assert.h>
#include <stdio.h>

#include "calc.c"

int main() {
  char* binaries[] = {"1010", "0101", "1111", "0000000", "1001100101", "111111111111111111111111111111111111111111111111111111111111111"};
  long long results[] = {10, 5, 15, 0, 613, 9223372036854775807};

  for(size_t i = 0; i < 6; ++i) {
    char* value = binaries[i];
    long long result = convert(value);

    assert(result == results[i]);
  }

  fprintf(stdout, "All tests passed sucessfully.\n");

  return 0;
}
