//realloc()
//U have 10 seats , u want to book 5 more and u want all the 15 to be contigeous - in this case u can use realloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,n,i,new_size;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int)); //Not *ptr in lhs coz u have aldredy declared *ptr on top 
    if(ptr == NULL)
    {
        printf("No memory\n");
        return 0;
    }
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    printf("The elements are\n");
    for(i=0;i<n;i++)
        printf("%d\t",*(ptr+i));

    printf("\nEnter the new size\n");
    scanf("%d",&new_size);
    ptr = (int*)realloc(ptr,((n+new_size)*sizeof(int)));
    if(ptr == NULL)
    {
        printf("No memory\n");
        return 0;
    }
    printf("Enter the new elements\n");
    for(i=n;i<(n+new_size);i++)
       scanf("%d",(ptr+i));

    printf("The elements are\n");
    for(i=0;i<(n+new_size);i++)
       printf("%d\t",*(ptr+i));

    free(ptr);
    return 0;  

}