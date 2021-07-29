#include <stdio.h>
#include <stdlib.h>

void change(int *);

void change(int *no)
{
  *no+=1;
}

int main()
{
  int num = 9;
  change(&num);
  printf("%d\n",num);
  return 0;
}
