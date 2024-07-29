# include <stdio.h>
 
void lsearch(int arr[], int num, int n);
 
int main() 
{
int num, element;
 
printf("Enter number of elements: ");
scanf("%d", &num);
 
int arr[100];
printf("Enter elements of array:\n");

for(int i = 0; i < num; i++) 
 {
    scanf("%d", &arr[i]);
 }
 
    printf("Enter number to be searched: ");
    scanf("%d", &element);
 
    lsearch(arr, num, element);
 
    return 0;
}
  
void lsearch(int arr[], int num, int n) 
{
    int ip = 0;
 
for(int i = 0; i < num; i++) 
{
    if(arr[i] == n) 
    {
        printf("Number found at position %d.\n", i + 1);
        ip = 1;
        break;
    }
}
 
    if(ip == 0) {
        printf("Number not found.\n");
    }
}