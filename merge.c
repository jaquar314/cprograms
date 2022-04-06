#include <stdio.h>
#include <conio.h>
void mergesort(int a[], int, int);
void merge(int a[], int, int, int);
/* Program for the implementation of merge sort */
int main()
{
   int i, n, a[20];
   printf("\nEnter the number of elements in the array: ");
   scanf("%d", &n);
   printf("\nEnter the elements one by one:\n");
   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
   mergesort(a, 0, n - 1);
   printf("\nElements after sorting:\n");
   for (i = 0; i < n; i++)
      printf("%d ", a[i]);
   return 0;
}

void mergesort(int a[], int low, int high)
{
   int mid;
   if (low < high)
   {
      mid = (low + high) / 2;
      mergesort(a, low, mid);
      mergesort(a, mid + 1, high);
      merge(a, low, mid, high);
   }
}

void merge(int a[], int low, int mid, int high)
{
   int h = low, i = low, j = mid + 1, k, b[20];
   while ((h <= mid) && (j <= high))
   {
      if (a[h] <= a[j])
      {
         b[i] = a[h];
         h++;
      }
      else
      {
         b[i] = a[j];
         j++;
      }
      i++;
   }
   if (h > mid)
   {
      for (k = j; k <= high; k++)
      {
         b[i] = a[k];
         i++;
      }
   }
   else
      for (k = h; k <= mid; k++)
      {
         b[i] = a[k];
         i++;
      }
   for (k = low; k <= high; k++)
      a[k] = b[k];
}