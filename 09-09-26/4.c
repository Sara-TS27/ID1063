//Code by Sara//
//Date: 09-09-26//

#include <stdio.h>
int find(char str[], char ch)
{
    int i = 0; //starts indexing from 0//
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            return i;
        i++; //increments the value of i//
    }
    return -1; //gives output as -1 when the while loop ends//
}
int main()
{
    char str[100], ch; //defines variables//
    printf("Input: ");
    scanf("%s", str);
    printf("Character: ");
    scanf(" %c", &ch); //takes character as input//
printf("Output: %d", find(str, ch)); //calls find function and prints output//
    return 0;
}
