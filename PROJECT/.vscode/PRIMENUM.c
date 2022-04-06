
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,x,p=1,n;
 printf("enter the given number :");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 if(n%i==0)
   {
     p=0;
     break;
   }
if(p)
{
printf("it is prime number :");
}
else
{
 printf("it is not a prime");
}
return 0;
}