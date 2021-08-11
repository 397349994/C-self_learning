#include <stdio.h>
#include <stdlib.h>


int main()
{
  int stairs;
  int input;
  int i;
  int count=0;
  printf("Please enter the range.\n");
  scanf("%d",&input);

  for(stairs=1; stairs<input+1;stairs++)
  {
    if(stairs%2==1&&stairs%3==2&&stairs%5==4&&stairs%6==5&&stairs%7==0)
    // if(stairs%2==1&&stairs%3==2&stairs%5==4&&stairs%6==5&&stairs%7==8)
    {
      printf("%d stairs is good\n",stairs);
      count++;
    }
    else
    {
      continue;
    }
  }
  printf("There are %d numbers fit this question\n", count);


}
