//Reverse Of A String Using Swap Method 

#include <stdio.h>
#include <string.h>
#define SIZE 100

void swap(char *a,char *b);

int main()
{
    char str[SIZE];
    int i,l;
    printf("Enter the string\n");
    gets(str);
    l = strlen(str);
    for(i=0;i<l/2;i++)
    {
        swap(&str[i],&str[l-i-1]);
    }
    printf("The string after reversing is %s",str);
    return 0;
}

void swap(char *a,char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}