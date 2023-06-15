//Reverse Of A String Using Reverse For Loop 
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
    int i;
    char str[SIZE];
    printf("Enter a string\n");
    gets(str);
    for(i=strlen(str)-1;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}


