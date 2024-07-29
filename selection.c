#include <stdio.h>

void selectionSort(int arr[], int n) 
{
    int i, j, minindex, temp;

for (i = 0; i < n - 1; i++) 
{
  minindex = i;
   for (j = i + 1; j < n; j++) 
   {
       if (arr[j] < arr[minindex]) 
       {
          minindex = j;
       }
    }

        if (minindex != i) 
        {
          temp = arr[i];
          arr[i] = arr[minindex];
          arr[minindex] = temp;
        }
}
}

void sort(int arr[], int n) 
{
 int i;
 for (i = 0; i < n; i++) 
  {
    printf("%d ", arr[i]);
  }
    printf("\n");
}

int main() 
{
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d integers:\n", n);
for (int i = 0; i < n; i++) 
   {
       scanf("%d", &arr[i]);
   }

    selectionSort(arr, n);

    printf("Sorted array:\n");
    sort(arr, n);

    return 0;
}
