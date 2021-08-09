#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*team-bag
  player-prop
  ownner-player
*/

//Player
typedef struct _player{
  int id;
  char position[20];
  double price;
  int marketNum;
  char desc[50];
}Player;

typedef struct _team{
  char teamId;
  int count;
  int max;
  Player players[8];
}Team;


typedef struct _ownner{
  int id;
  char name[50];
  Team team;
  double gold;
}Ownner;

Player *player_ptr;
Ownner *Ownner_ptr;
int playerCount;
int ownnerCount;
void Init()
{
  //1.Inisialize data
  static Player playerArray[]={
    {1,"PG",2000,10,"Point Guard"},
    {2,"SG",2000,10,"Shotting Guard"},
    {3,"SF",2000,10,"Small Forward"},
    {4,"PF",2000,10,"Power Forward"},
    {5,"C",2000,10,"Center"},
  };
  player_ptr=playerArray;//set the pointer
  playerCount=sizeof(playerArray)/sizeof(Player);

  static Ownner ownnerArray[]={
    {1,"GSW",.gold=50000,.team.max=8},
    {2,"LAL",.gold=50000,.team.max=8},
    {3,"LAC",.gold=50000,.team.max=8},
    {4,"BKN",.gold=50000,.team.max=8},
  };
  Ownner_ptr=ownnerArray;
  ownnerCount=sizeof(ownnerArray)/sizeof(Ownner);
}

void showPlayer();
void showOwnner();
void Trade(Ownner *ownnner,int playerID);

void showPlayer()
{
  int i;
  if(player_ptr==NULL) return;
  printf("ID\tPosition\tPrice\t  In Markert\tDecribe\n");
  for(i=0;i<playerCount;i++)
  {
    printf("%d\t%s\t\t%.2lf\t  %d\t\t%s\n",player_ptr[i].id,player_ptr[i].position,
                                     player_ptr[i].price,player_ptr[i].marketNum,player_ptr[i].desc);
  }

}

void showOwnner()
{
  int i,j;
  if(Ownner_ptr==NULL) return;
  printf("ID\tTeam\tMoney\n");
  for(i=0;i<ownnerCount;i++)
  {
    printf("%d\t%s\t%.2lf\n",Ownner_ptr[i].id,Ownner_ptr[i].name,Ownner_ptr[i].gold );
    for(j=0;j<Ownner_ptr[i].team.count;j++)
    {
      printf("\t%s\t%d\n",Ownner_ptr[i].team.players[j].position,Ownner_ptr[i].team.count);
    }
  }
}

void Trade(Ownner *ownner,int playerID)
{

  int i;

  Player *tradePlayer=NULL;
  for(i=0;i<playerCount;i++)
  {
    if(playerID==player_ptr[i].id)
    {
      tradePlayer = &player_ptr[i];

      break;
    }

  }
  if(tradePlayer->marketNum<=0)
  {
    printf("The position is no longer available. \n");
    return;
  }

  if(ownner->gold<tradePlayer->price)
  {
    printf("Money not enough. \n");
    return;
  }
  if(ownner->team.count>=ownner->team.max)
  {
    printf("team is full\n" );
    return;
  }

  tradePlayer->marketNum--;
  ownner->gold-=tradePlayer->price;

  for(i=0;i<ownner->team.count;i++)
  {
    printf("%d\n",i);
    if(playerID==ownner->team.players[i].id)
    {
      ownner->team.players[i].marketNum++;
      break;
    }
  }

  //创建或更新“team”
  ownner->team.players[ownner->team.count].id=tradePlayer->id;
  ownner->team.players[ownner->team.count].price=tradePlayer->price;
  ownner->team.players[ownner->team.count].marketNum=1;
  strcpy(ownner->team.players[ownner->team.count].position,tradePlayer->position);
  strcpy(ownner->team.players[ownner->team.count].desc,tradePlayer->desc);
  ownner->team.count++;

}

int main()
{
  //Inisialize data
  Init();
  //print data
  //before trade
  printf("*******Before trading*******\n");
  showPlayer();
  printf("The situation of the teams: \n");
  showOwnner();

 //动态输入
  int choice_Ownner;
  printf("Please enter the team ID to buy a player:\n");
  scanf("%d",&choice_Ownner);
  int choice_position;
  printf("Please enter the position you want to buy\n");
  scanf("%d",&choice_position);
  Trade(&Ownner_ptr[choice_Ownner-1],choice_position);

  //after trade
  printf("*******After trading*******\n");
  showPlayer();
  printf("The situation of the teams: \n");
  showOwnner();

  return 0;


}
