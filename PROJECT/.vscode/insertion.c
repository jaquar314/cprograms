
#include<stdio.h>
#include<conio.h>
void ins(int a[],int n);
int main()
{
    int a[10],n;
    int i;
    printf("enter the array");
    scanf("%d",&n);
    printf("enter the elements one by one");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ins(a,n);
    printf("sorted elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
    return 0;
}
void ins(int a[],int n)
{
    int i,j,key;
    for (i=0;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while((j>=0)&& key<a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }

}