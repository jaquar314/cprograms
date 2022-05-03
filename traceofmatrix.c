#include <stdio.h>
int main()
{
    int a[10][10],m,i,j,t=0;
    printf("enter the size of the matrix");
    scanf("%d",&m);
    printf("enter the elements of the a :");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
        scanf("%d",a[i][j]);
        for(i=0;i<m;i++)
            t+=a[i][j];
        
        printf("the trace of the matrix is :%d",t);
    return 0;
}
