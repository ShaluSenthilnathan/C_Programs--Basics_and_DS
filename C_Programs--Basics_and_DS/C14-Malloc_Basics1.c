//Basics of malloc()

#include <stdio.h>
#include <stdlib.h> //for malloc(),calloc() and realloc()

int main()
{
    int *ptr = (int*)(malloc(sizeof(int)));
    *ptr = 99;
    printf("address = %u\t value = %d\n",ptr,*ptr);
    return 0;

}