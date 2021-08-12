#include <stdio.h>

int main()
{
  int penny;
  int nickel;
  int dime;
  int quater;
  double dollar;

  printf("Please enter your coins\n");
  printf("penny: ");
  scanf("%d",&penny);
  printf("nickel: ");
  scanf("%d",&nickel);
  printf("dime: ");
  scanf("%d",&dime);
  printf("quater: ");
  scanf("%d",&quater);
  dollar=0.01*penny+0.05*nickel+0.1*dime+0.25*quater;
  printf("These coins worth %.2lf doallars\n",dollar );
}
