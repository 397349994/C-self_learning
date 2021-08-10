#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void func(char string[]);

void func(char string[])
{
  int i;
  char * pointer;
  char newString[20];
  for(i=0;i<strlen(string)-1;i++)
  {
    if(string[i]!='*')
    {
      pointer = &string[i];
      printf("%c",*pointer);
    }
  }
  printf("\n");

}

int main()
{
  char rawString[20];
  printf("Please enter the string: \n");
  gets(rawString);

  func(rawString);

  return 0;
}
