#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main()
{
  int i;
  int count=5;
  int choice;
  int tempcount;
  int index = -1;
  int awardChoice;
  int year=2020;
  char names[6][8]={"curry","george","kobe","lebron","giannis"};
  char levelNames[5][8]={"GOAT","top20","super","star","allstar"};
  int level[]={0,0,0,0,0,-1};
  int performance[]={100,100,100,100,100,100};
  int endGame=0;

  while(endGame==0)
  {


    printf("****************************\n");
    printf("names\t level\t performance\n");
    printf("----------------------------\n");

    printf("year %d\n", year);
    year++;

    for(i=0; i<count ;i++)
    {
      printf("%s\t  ",names[i]);
      if(performance[i]>=160)
      {
        // levelNames[i]="supeStar";
        printf("%s\t  ", levelNames[0]);
      }
      else if(performance[i]>=140)
      {
        // levelNames[i]="top_20";
        printf("%s\t  ", levelNames[1]);
      }
      else if(performance[i]>=120)
      {
        // levelNames[i]="GOAT";
        printf("%s\t  ", levelNames[2]);
      }
      else if(performance[i]>=100)
      {
        // levelNames[i]="star";
        printf("%s\t  ", levelNames[3]);
      }
      else if(performance[i]>=80)
      {
        // levelNames[i]="allstar";
        printf("%s\t  ", levelNames[4]);
      }
      else
      {
        printf("bad\t");
      }
      printf("%-d\n",performance[i] );

    }

    printf("Please choose a player: 1.curry 2.george 3.kobe 4.lebron 5.giannis\n");
    scanf("%d",&choice);

    printf("which award does player do: 1.win mvp 2.win fmvp 3.lazy 4.being fake\n");
    scanf("%d",&awardChoice);
    if(awardChoice==1)
    {
      performance[choice-1]+=20;
    }
    else if(awardChoice==2)
    {
      performance[choice-1]+=15;
    }
    else if(awardChoice==3)
    {
      performance[choice-1]-=15;
    }
    else
    {
      performance[choice-1]-=20;
    }

    for(i=0;i<count;i++)
    {
      if(performance[i]<=50)
      {
        printf("The player %s is eliminated from hall of fame\n", names[i]);
        endGame=1;
        break;
      }
      else
      {
        endGame=0;
      }
    }


  }


  // while(1)
  // {
  //   printf("****************************")
  //   printf("names\tlevel\tperformance\n");
  // }






}
