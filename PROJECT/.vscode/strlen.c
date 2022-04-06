#include<stdio.h>
int strlen(char *p);
int main()
{
    char a[25];
    printf("enter a string:");
    scanf("%s",&a);
    printf("\n length of the name is : %d",strlen(a)-1);
    return 0;
}
int strlen(char *p)
{
    char*q=p;
    while(*p++);
    return p-q;
}

