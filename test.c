#include <stdio.h>
#include <stdlib.h>

int main()
   {
     int i;
     int j;
     for(int i=0;i<4;i++)
     {
       for(int j=0;j<2*i;j++)
       {
         for(j = 0;j<=2-i;j++)
         {
           printf(" ");
         }
         for(j=0;j<=i*2;j++)
         {
           if(i==1||j==0||j==2*i)
           {
             printf("*");
           }
           else
           {
             printf(" ");
           }


         }
       }
       printf("\n");
     }

     for(int i=0;i<4;i++)
     {
       for(int j=0;j<7;j++)
       {if(j==0||j==6)
         {
           printf("*");
         }
         else
         {
           printf(" ");
         }
       }
       printf("\n");
     }

     for(int i =0; i<2;i++)
     {
       for(int j = 0; j<=i;j++)
       {
         printf(" ");
       }
       for(int j=0; j<=4-2*i;j++)
       {
         if(j==0||j==4-2*i||i==1)
         {
           printf("*");
         }
         else
         {
           printf(" ");
         }
       }
       printf("\n");
     }
     // char sex;
     // sex = getchar();
     // putchar(sex);
     // int i = 0;
     // for(;i<6;i++)
     // {
     //   printf("%d\n",i );

     // int num;
     // printf("Please enter a number: \n");
     // scanf("%d", &num);
     // switch(num)
     // {
     //   case 1:
     //       printf("it is 1\n");
     //   case 2:
     //       printf("it is 2\n");
     //   case 3:
     //       printf("it is 3\n");



     // int input;
//   printf("Please enter a 4 digit number: ");
//   scanf("Please enter a 4 digit number: %d",&input);
//   int d1;
//   d1 = input/1000;
//   int d4;
//   d4 = input%10;
//   input = input/10;
//   int d3;
//   d3 = input%10;
//   input = input/10;
//   int d2;
//   d2 = input%10;
//   int sum = d1+d2+d3+d4;

  // int d1;
  // d1 =

  // printf("The sum of the 4 digitg is %d\n",sum);

  // printf("字符\tASCII\n");
  // printf("%c\t%d\n",c1,c1 );
  // printf("%c\t%d\n",c2,c2 );
  // printf("%c\t%d\n",c3,c3 );
  // printf("%c\t%d\n",c1-32,c2-32 );
  // printf("%f\n",fo );
  return 0;

}
