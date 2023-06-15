//Swapping Two Variables Using Call by Value Method 

#include <stdio.h>

void swap(int a,int b);

int main()
{
    int a=10,b=20;
    printf("Before Swapping %d %d\n",a,b);
    swap(a,b);
    printf("After swapping %d %d\n",a,b);
    return 0;
}
void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

/*The above output will be 10,20 in both the cases - If you want to modify the original variables a and b in the main 
function, you need to pass their memory addresses to the swap function using pointers */