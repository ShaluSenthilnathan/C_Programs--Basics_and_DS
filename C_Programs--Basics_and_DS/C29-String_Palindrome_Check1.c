//Code To Find If A String Is A Palindrome 

#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
    int i,l,count=0;
    char str[SIZE];
    printf("Enter a string\n");
    gets(str);
    l = strlen(str);
    printf("The reverse of the string is:");
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    for(i=0;i<l;i++)
    {
        if(str[i] == str[l-i-1])
           count++;
    }
    if(count == l)
       printf("\nIt is a palindrome\n");
    else
       printf("\nIt's not a palindrome\n");
    return 0;
}
