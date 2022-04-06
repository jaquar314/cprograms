#include<stdio.h>
int strcmp(char*p,char*q)
{
    while(*p==*q)
    {
        p++;
        q++;
    }
    if((*p==*q)&&(*p!='\0'))
    return 0;
    else 
    return *p-*q;

}
int main()
{
    char *p="saikiran";
    char *q="sai";
    printf("\n returned=%d",strcmp(p,q));
    return 0;
}