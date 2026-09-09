//Code by Sara//
//Date: 09-09-26//

#include <stdio.h>
#include <string.h>

int palindrome(char str[])
{
    int i;
    int length = strlen(str); //finds length of string//

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
            return 0; //returns 0 if characters are not equal//
    }

    return 1; //returns 1 if string is palindrome//
}

int main()
{
    char str[100]; //defines string//

    printf("Input: ");
    scanf("%99s", str);

    if (palindrome(str))
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}
