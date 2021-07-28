#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
  int i;
  int j;
  int array[N]={12,34,86,21,42};
  for(i=0;i<N-1;i++)
  {
    for(j=0;j<N-i-1;j++)
    {
      int temp;
      if(array[j]<array[j+1])
      {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }

  for(i=0;i<N;i++)
  {
    printf("%d\n",array[i]);
  }



}
