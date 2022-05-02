#include <stdio.h>
void quicksort(int a[], int l, int h);
int main()
{
    int a[10], n, i;
    printf("Quick sort");
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("Enter the values of the array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quicksort(a, 0, n - 1);
    printf("Elements after sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
void quicksort(int a[], int l, int h)
{
    int i = l, j = h, p = l, t; 
    if (l < h)
    {
        while (i < j)
        {
            while ((a[i] <= a[p]) & i < h)
                i++;
            while (a[j] > a[p])
                j--;
            if (i < j)
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
            t = a[j];
            a[j] = a[p];
            a[p] = t;
            quicksort(a, l, j - 1);
            quicksort(a, j + 1, h);
        }
    }
}