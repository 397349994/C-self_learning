#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"

char hotelNames[4][50]={
  "HOTEL1","HOTEL2","HOTEL3","HOTEL4"
};

int menu(void)
{
  int choice;
  int i;
  printf("please enter the hotel you want to live in: \n");
  for(i=0;i<4;i++)
  {
    printf("%d. %s\n",i+1,hotelNames[i]);
  }
  printf("Please enter your choice: ");
  scanf("%d",&choice);
  return choice;


}
