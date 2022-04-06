#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
  clrscr();
  int c,n,max,num;
  printf("enter the random numbers you want \n");
  scanf("%d",&n);
  printf("enter the maximum value of the random number\n");
  scanf("%d",&max);
  printf("%d random numbers from 0 to %d are : \n",n,max);
  randomize();
  for(c=1;c<=n;c++)
  {
    num=random(max);
    printf("%d\n",num);
  }
  getch();
 return 0;
}