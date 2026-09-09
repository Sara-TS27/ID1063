//Code by Sara//
//Date 09-09-26//
#include <stdio.h>
#include <string.h>
int palindrome(char str[]) //creates a function//
{
    int i;
    int length=strlen(str);
    for (i=0; i<length/2; i++) //for loop uptill the middle character// 
    {
        if (str[i] != str[length-1-i]) //logic //
            return 0;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Input: ");
    scanf("%s", str);
    if (palindrome(str))
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}
