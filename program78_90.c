#include<stdio.h>



void Display(int iNo)
{
int i = 0;

if(iNo < 0)
{

    iNo = -iNo;
}

for(i = iNo; i>=1; i--)
{

    printf("%d\t",i);
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