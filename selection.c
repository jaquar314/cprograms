
#include <stdio.h>
void ss(int a[], int n);
int main()
{
       int i, n, a[10];
       printf("\n\t SELECTION SORT \n");
       printf("\n Enter the size of an array: ");
       scanf("%d", &n);
       printf("\n Enter the values: ");
       for (i = 0; i < n; i++)
       {
              scanf("%d", &a[i]);
       }
       ss(a, n);
       printf("Sorted Elements: ");
       for (i = 0; i < n; i++)
       {
              printf("%d ", a[i]);
       }
       return 0;
}
void ss(int a[], int n)
{
       int p, i, j, t;
       for (i = n - 1; i >= 0; i--)
       {
              p = 0;
              for (j = 1; j <= i; j++)
              {
                     if (a[j] > a[p])
                            p = j;
                     t = a[p];
                     a[p] = a[i];
                     a[i] = t;
              }
       }
}
