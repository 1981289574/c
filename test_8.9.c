#include <stdio.h>

int main()
{
  int value;
  scanf("%d", &value);
  printf("year=%d\n", value / 10000);
  value %= 10000;
  printf("month=%02d\n", value / 100);
  printf("date=%02d\n", value % 100);
  return 0;
}
