#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,n;
  printf("enter a number");
  scanf("%d",&n);
  if(n==0||n==1)
  printf("the given nums are fibanaci");
    else
      {
       a=0;
       b=1;
       c=a+b;
      }
   while(c<n)
   {
     a=b;
     b=c;
     c=a+b;
   }
  if(c==n)
  printf("it is fibanacci");
  else
  printf("it is not fibanacci");

  getch();
  return 0;
  }