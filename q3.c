#include <stdio.h>
 
void tower(int n, char source, char temp, char destination) 
{
    if (n == 1) 
    {

        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
 
    tower(n - 1, source, destination, temp);
 
    printf("Move disk %d from %c to %c\n", n, source, destination);
 
    tower(n - 1, temp, source, destination);
}
 
int main() 
{
    int n;
 
    printf("Enter the number of disks: ");
    scanf("%d", &n);
 
    tower(n, 'A', 'B', 'C');
 
    return 0;
}