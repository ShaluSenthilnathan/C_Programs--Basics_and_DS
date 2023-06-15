//Adding Two Numbers Using Pointers 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("%d\n",(*ptr1 + *ptr2));
    printf("%d",abs(*ptr1 - *ptr2));
    return 0;
}

//abs returns the the absolute number(i.e the positive number alone) - its impoted from stdlib.h 