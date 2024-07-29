#include <stdio.h>
#include <string.h>
 
int palindrome(char input[], int lefti, int righti) {
    if (lefti >= righti) return 1;
 
    if (input[lefti] == input[righti]) {
        return palindrome(input, lefti + 1, righti - 1);
    }
 
    return 0;
}
 
int main() {
    char input[100];
 
    printf("Enter a string for palindrome check: ");
    scanf("%s", input);
 
    if (palindrome(input, 0, strlen(input) - 1)) {
        printf("%s is a Palindrome\n", input);
    } else {
        printf("%s is not a Palindrome\n", input);
    }
 
    return 0;
}