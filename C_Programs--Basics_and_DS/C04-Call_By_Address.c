//Swapping Two Variables By Call By Address Method 

#include <stdio.h>

int swap(int *a,int *b);

int main()
{
    int a=10,b=5;
    printf("Before Swapping\n");
    printf("%d\t %d\n",a,b);
    swap(&a,&b);
    printf("After Swapping\n");
    printf("%d\t%d\n",a,b);
    return 0;
}

int swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}