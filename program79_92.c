#include<stdio.h>



void Display(int iNo)
{
int i = 0;

if(iNo < 0)
{

    iNo = -iNo;
}

for(i = 1; i<=iNo; i++)
{

    printf("%d\t*\t",i);
    //printf("%d\t*\t",i);
    //printf("*\t");
}
}

int main()



{

int iValue = 0;

printf("Enter the Number");
scanf("%d",&iValue);

Display(iValue);

    return 0;
}