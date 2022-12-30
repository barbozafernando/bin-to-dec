#include <stdio.h>									
#include <assert.h>
#include "calc.c"

int main()
{
  char *binaries[] = {"1010", "0101", "1111", "0000000", "1001100101"};
  int results[] = {10, 5, 15, 0, 613};

  for(int i = 0; i < 5; i++)
  {
    char *value = binaries[i];
    int result = convert(value);

    assert(result == results[i]);
  }

  return 0;
}