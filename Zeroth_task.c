/*
Write a program, that reads two strings from the user, each contains max. 30 valid characters.

    Declare two character arrays of 31 call them str1 and str2
    Use scanf() with %s to read into the string
    Use the following snippet to write out all characters and codes in the array:

extend the program with the following:

    Determine and print out the length of str1 (strlen)
    Compare str1 and str2, print out the result! (strcmp)
    Copy the content of str1 to str 2 (strcpy), compare them again!
    Concatenate str1 and str2 (strcat). 
    Modify the sizes to avoid overindexing!
    Print the concatenated string!
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[61], str2[31];
    scanf("%s", str1);
    scanf("%s", str2);
    // read from user herDate e
    for (int i = 0; i < 31; i++)
    {
        printf("%dth letter='%c', code=%d\n", i, str1[i], str1[i]);
    }
    for (int i = 0; i < 31; i++)
    {
        printf("%dth letter='%c', code=%d\n", i, str2[i], str2[i]);
    }
    printf("str 1 is this long : %d", (int) strlen(str1));
    printf("str 2 is this long : %d", (int) strlen(str2));
    printf("%d", strcmp(str1,str2));
    strcpy(str2,str1);
    printf("%d", strcmp(str1, str2));
    strcat(str1,str2);
    printf("%s", str1);
    return 0;
}
