//Inputing Array Elements Using calloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int *ptr = (int*)(calloc(n,sizeof(int)));
    if(ptr == NULL)
    {
        printf("No memory\n");
        return 0;
    }
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
       scanf("%d",(ptr+i));
    printf("The entered elements are\n");
    for(i=0;i<n;i++)
       printf("%d\t",*(ptr+i));
    
    free(ptr);
    return 0;

}