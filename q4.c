#include <stdio.h>
 
void productofmatrices(int r1, int c1, int r2, int c2);
 
int main() 
{
int r1, c1, r2, c2;
printf("Enter r1 : ");
scanf("%d", &r1);
printf("Enter c1 : ");
scanf("%d", &c1);
printf("Enter r2 : ");
scanf("%d", &r2);
printf("Enter c2 : ");
scanf("%d", &c2);
 
 if (c1 == r2) 
    {
        productofmatrices(r1, c1, r2, c2);
    } else
    {
        printf("Invalid input. Matrices are not compatible for multiplication.\n");
    }
 
    return 0;
}
 
void productofmatrices(int r1, int c1, int r2, int c2) 
{
    int m1[10][10], m2[10][10], ans[10][10];
    int i, j, k, sum;
 
    printf("Enter elements of Matrix m1 : \n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            scanf("%d", &m1[i][j]);
        }
    }
 
    printf("Enter elements of Matrix m2 : \n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            scanf("%d", &m2[i][j]);
        }
    }
 
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            ans[i][j] = 0;
        }
    }
 
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            sum = 0;
            for (k = 0; k < c1; k++) 
            {
                sum += m1[i][k] * m2[k][j];
            }
            ans[i][j] = sum;
        }
    }
 
    printf("Product of the Matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}
