#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _beauty
{
  int playerID;
  int score;
  int rank;
}Beauty;

void Init();
void func();


Beauty *beauty_ptr;


// void func()
// {
//
// }

int main()
{


  Beauty players[] = {
      {1,5,-1},
      {2,4,-1},
      {3,7,-1},
      {4,9,-1},
      {5,14,-1},
  };


  int i,j;
  for(i=0;i<sizeof(players)/sizeof(Beauty)-1;i++)
  {
    int temp;for(j=0;j<sizeof(players)/sizeof(Beauty)-i-1;j++)
    {
      Beauty temp;
      if(players[j].score<players[j+1].score)
      {
        temp = players[j];
        players[j] = players[j+1];
        players[j+1] = temp;
      }
    }
  }
  players[0].rank=3;
  for(i=0;i<sizeof(players)/sizeof(Beauty);i++)
  {
    players[i].rank=i+1;
  }

  for(i=0;i<sizeof(players)/sizeof(Beauty)-1;i++)
  {
    int temp;for(j=0;j<sizeof(players)/sizeof(Beauty)-i-1;j++)
    {
      Beauty temp1;
      if(players[j].playerID>players[j+1].playerID)
      {
        temp1 = players[j];
        players[j] = players[j+1];
        players[j+1] = temp1;
      }
    }

  }

  printf("ID\tScore\tRank\n" );
  for(i = 0; i<sizeof(players)/sizeof(Beauty);i++)
  {
    printf("%d\t%d\t%d\n",players[i].playerID,players[i].score, players[i].rank);
  }


  return 0;



}
