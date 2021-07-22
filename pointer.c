#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  num = 1;
  int * num_ptr;
  num_ptr = &num;
  printf("the number %d has a address at %p\n",*num_ptr, num_ptr);

  double array[5]={12,34,56,78,90};
  double * array_ptr;
  array_ptr=array;

  int i;
  for(i=0;i<5;i++)
  {
    printf("the %.2lf has a address at %p\n",*(array_ptr+i),array_ptr+i );
  }



  double arrayTwo[4][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12}
  };

  double (*arrayTwo_ptr)[3] = arrayTwo;

  int j;
  for(i=0;i<4;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("the number %.2lf has a address at %p\n",*(arrayTwo_ptr[i]+j),arrayTwo_ptr[i]+j);
    }
  }



















}
