#include<stdio.h>
#include<conio.h>
int main()
{
  int n,a[10],s=0,i;
  printf("\n how many numbers : \n");
  scanf("%d",&n);
  printf("\n enter elements one by one:");
  for(i=0;i<=n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<=n;i++)
  s+=a[i];
  printf("\n sum= %d",s);
  return 0;
}


