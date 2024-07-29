#include <stdbool.h>
#include <stdio.h>
 
void findTriplets(int arr[], int n)
{
    bool found = false;
    for (int i = 0; i < n - 2; i++)
     {
        for (int j = i + 1; j < n - 1; j++) 
        {
            for (int k = j + 1; k < n; k++) 
            {
                if (arr[i] + arr[j] + arr[k] == 0) 
                {
                    printf("%d %d %d\n", arr[i], arr[j],arr[k]);
                    found = true;
                }
            }
        }
    }
 
    if (found == false)
        printf(" not exist \n");
}
 
int main()
{
	int num;
 
    int arr[] = { 0, -1, 2, -3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findTriplets(arr, n);
    return 0;
}