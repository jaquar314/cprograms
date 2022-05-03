<<<<<<< HEAD
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
=======
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,x,p=1;
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
>>>>>>> eb87f9ddc6fb1bb5b52e956a3fcd7fcd7e9c7820
}