#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"


extern char hotelNames[4][50];

int main()
{
  int choice;
  choice = menu();
  if(choice>0 && choice<5)
  {
    printf("Your choice is %s\n",hotelNames[choice-1]);
  }


  return 0;
}
