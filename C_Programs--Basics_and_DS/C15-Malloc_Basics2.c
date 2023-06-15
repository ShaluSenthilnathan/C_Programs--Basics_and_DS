//Inputing A Single Element Using malloc()

#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *ptr;
    ptr = (float*)malloc(sizeof(float));
    if(ptr == NULL)
    {
        printf("No memory\n");
        return ;
    }
    *ptr = 77.12345;
    printf("adress = %u , value = %f",ptr,*ptr);
    free(ptr);
}