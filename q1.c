#include <stdio.h>
 
void copy(char str1[], char str2[], int index) 
{
str2[index] = str1[index];
if (str1[index] == '\0') return;
copy(str1, str2, index + 1);
}
 
int main() 
{
char str1[100], str2[100];
printf("Enter a string: ");
fgets(str1, sizeof(str1), stdin);
copy(str1, str2, 0);
printf("Copied string: %s\n", str2);
 
return 0;
}