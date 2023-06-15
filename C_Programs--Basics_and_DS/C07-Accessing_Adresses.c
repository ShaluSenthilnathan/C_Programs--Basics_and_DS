//Accessing Adresses And Values Of Array Elements 
#include <stdio.h>

int main()
{
    int arr[] = {11,22,33,44,55,66,77};
    int i = 3;

    //To get base address of the array
    printf("%d\t",arr);
    printf("%d\t",&arr[0]);
    printf("%d\t",arr+0);

    //To get the 1st element's address
    printf("\n%d\n",&arr[0]);

    //To get ith element's address
    printf("%d\t",&arr[i-1]);
    printf("%d\n",(arr+(i-1)));    //i-1 because of indexing which begins from 0

    //To get the value of the first element
    printf("%d\t",arr[0]);
    printf("%d\t",*arr);
    printf("%d\t",*(arr+0));

    //To get the value of the ith element
    printf("\n%d",*(arr+(i-1)));

    return 0;

}