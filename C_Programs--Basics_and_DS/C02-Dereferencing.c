//Dereferncing Operation - 4 Ways Of Changing The Value Of a Using 3 Pointers 
#include <stdio.h>

int main()
{
    int a=10;
    int *ptr = &a;
    printf("%d\n",a);
    *ptr = 126; //M1
    printf("%d\n",a);
    int *adr;
    int **ptrptr;
    adr = &a;
    ptrptr = &adr;
    *adr = 125; //M2
    printf("%d\n",a);
    **ptrptr = 130; //M3
    printf("%d\n",a);
    a = 120;//M4
    
    return 0;
}
