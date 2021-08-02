#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define KEY 5


char * encrypt(char[]);
char * decode(char[]);

char * encrypt(char password[])
{
  int i = 0;
  int count;
  count = strlen(password);
  for(;i<count;i++)
  {
    password[i] = password[i]+i+KEY;
  }
  return password;
}

char * decode(char password[])
{
  int i = 0;
  int count;
  count = strlen(password);
  for(;i<count;i++)
  {
    password[i] = password[i]-i-KEY;
  }
  return password;
}

int main()
{
  char password[50];
  printf("Please enter the code: \n");
  scanf("%s", password);
  printf("Your password is: %s\n", password);

  encrypt(password);
  printf("Your encoded password is: %s\n", password);
  decode(password);
  printf("Your pass word after decoded is: %s\n", password);

  return 0;
}
