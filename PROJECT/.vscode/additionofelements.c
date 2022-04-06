#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a[10],s=0,i;
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("enter one by one");
    scanf("%d\n",&a[i]);
    for(i=0;i<n;i++)
    s+=a[i];
    printf("\n sum of the numbers is : %d",s);
    return 0;
}