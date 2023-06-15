//Polynomial Addition 

#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 100

struct polynomial
{
    float coeff;
    int expon;
};

struct polynomial poly[MAX_TERMS];

void polyAdd(int SA,int FA,int SB,int FB,int *SD,int *FD);
int comp(int a,int b);
void attach(float CO,int ex);

int avail = 0;

int main()
{
    int SA,FA,SB,FB,NA,NB,i,SD,FD;
    printf("Enter the number of terms in the first polynomial\n");
    scanf("%d",&NA);
    printf("Enter the coeffecients and exponents of the %d terms\n",NA);
    SA = 0;
    for(i=0;i<NA;i++)
       scanf("%f %d",&poly[i].coeff,&poly[i].expon);
    FA = i-1;
    SB = i;
    printf("Enter the number of terms in the second polynomial\n");
    scanf("%d",&NB);
    printf("Enter the coeffecients and exponents of the %d terms\n",NB);
    for(i=SB;i<SB+NB;i++)
        scanf("%f %d",&poly[i].coeff,&poly[i].expon);
    FB = i-1;
    FD = 0;
    avail = i;
    polyAdd(SA,FA,SB,FB,&SD,&FD);
    printf("Sum is\n");
    for(i=SD;i<=FD;i++)
        printf("%f %d\t",poly[i].coeff,poly[i].expon);
        
    return 0;
}

void polyAdd(int SA,int FA,int SB,int FB,int *SD,int *FD)
{
    
    float coeff;
    *SD = avail;
    while((SA<=FA)&&(SB<=FB))
    {
        switch(comp(poly[SA].expon,poly[SB].expon))
        {
            case -1:
            attach(poly[SB].coeff,poly[SB].expon);
            SB++;
            break;
            
            case 1:
            attach(poly[SA].coeff,poly[SA].expon);
            SA++;
            break;
            
            case 0:
            coeff = poly[SA].coeff + poly[SB].coeff;
            attach(coeff,poly[SA].expon);
            SA++;
            SB++;
            break;
        }
    }
    
    for( ;SA<=FA;SA++)
       attach(poly[SA].coeff,poly[SA].expon);
    for( ;SB<=FB;SB++)
       attach(poly[SB].coeff,poly[SB].expon);
       
    *FD = avail - 1;
}

int comp(int a,int b)
{
    if(a<b)
       return -1;
    else if(a==b)
       return 0;
    else 
       return 1;
}

void attach(float CO,int ex)
{
    poly[avail].coeff = CO;
    poly[avail].expon = ex;
    avail++;
}