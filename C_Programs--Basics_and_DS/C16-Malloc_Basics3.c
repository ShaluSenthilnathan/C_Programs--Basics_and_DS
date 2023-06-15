//Inputing Array Elements Using malloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int *ptr = (int*)malloc(sizeof(int)*n);
    if(ptr == NULL)
    {
        printf("No Memory\n");
        return 0;
    }
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
       scanf("%d",(ptr+i));  //suppose ptr is 2016 the ptr+1 will be 2020 ; ptr+2 will be 2024 ...so on....coz of int datatype...for float also +4 and double +8
    printf("The entered elements are\n");
    for(i=0;i<n;i++)
       printf("%d\t",*(ptr+i));
    free(ptr); //Deallocate the memory after usage 
    return 0;
}