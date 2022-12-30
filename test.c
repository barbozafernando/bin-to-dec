#include <stdio.h>									
#include <assert.h>
#include "calc.c"

int main()
{
  char *first_value = "1010";
  char *second_value = "0101";
  char *third_value = "1111";
  char *fourth_value = "0000";
  char *fifth_value = "1001100101";

  int first_result = convert(first_value);
  assert(first_result == 10);

  int second_result = convert(second_value);
  assert(second_result == 5);

  int third_result = convert(third_value);
  assert(third_result == 15);
  
  int fourth_result = convert(fourth_value);
  assert(fourth_result == 0);

  int fifth_result = convert(fifth_value);
  assert(fifth_result == 613);

  return 0;
}