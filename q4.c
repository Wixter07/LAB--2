#include <stdio.h>
 
int MinIndex(int arr[], int start, int end) {
    int minindex = start;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] < arr[minindex]) {
            minindex = i;
        }
    }
    return minindex;
}
 
void SelectionSort(int arr[], int start, int n) {
    if (start >= n - 1) {
        return;
    }
 
    int minindex = MinIndex(arr, start, n - 1);
 
    int temp = arr[start];
    arr[start] = arr[minindex];
    arr[minindex] = temp;
 
    SelectionSort(arr, start + 1, n);
}
 
int main() {
    int n;
 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
 
    int arr[n];
 
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
    SelectionSort(arr, 0, n);
 
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
 
    return 0;
}