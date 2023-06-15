//Tower Of Hanoi

#include <stdio.h>

void tower_of_hanoi(int no_disks,char source,char dest,char aux)
{
    if(no_disks == 1)
    {
        printf("Disk 1 moved from %c to %c\n",source,dest);
        return ;
    }
    tower_of_hanoi(no_disks-1,source,aux,dest);    //n-1 disks are moved from A to B recursively
    printf("Disk %d is moved from %c to %c\n",no_disks,source,dest); //Largest disk is moved from B to C
    tower_of_hanoi(no_disks-1,aux,dest,source);   //n-1 disks are moved from A to C recursively
}
int main()
{
    int no_disks;
    printf("Enter the number of disks\n");
    scanf("%d",&no_disks);
    tower_of_hanoi(no_disks,'A','C','B'); 
    return 0;
}
