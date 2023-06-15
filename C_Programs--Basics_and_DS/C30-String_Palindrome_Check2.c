//Code To Find If A String Is A Palindrome - Using Functions 

#include <stdio.h>
#include <string.h>
#define SIZE 100

int palindrome_check(char str[],int l);

int main()
{
    int l,i,res;
    char str[SIZE];
    printf("Enter the string\n");
    gets(str);
    l = strlen(str);
    res = palindrome_check(str,l);
    if(res==1)
       printf("It's a palindrome!\n");
    else
       printf("It's not a palindrome\n");
    return 0;
}

int palindrome_check(char str[],int l)
{
    int i,count=0;
    for(i=0;i<l;i++)
    {
        if(str[i] == str[l-i-1])
           count++;
    }
    if(count==l)
       return 1;
    else 
       return 0;
}