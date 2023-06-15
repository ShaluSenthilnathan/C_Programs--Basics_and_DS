//Void Pointer Type Casting 

#include <stdio.h>
#include <stdlib.h> //This library is included for malloc()

void main()
{
    int i,*pi;
    float f,*pf;
    pi = (int*)malloc(sizeof(int));
    pf = (float*)malloc(sizeof(float));
    *pi = 10.24;
    *pf = 3.14;
    printf("interger=%d,float number = %f",*pi,*pf);
    free(pi);
    free(pf);
    return ; //coz of vois func
}

/*malloc() - Its a func which returns the address of memory location from heap memeory - 
             It returns the address in the sense it returns leading byte address 
             For example its a int which occupies 4 bytes between 2016-2020 then it returns 2016 which is the leading byte address */

                        
