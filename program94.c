#include<stdio.h>



void Display(int iNo)               //2N
{
int i = 0;

if(iNo < 0)
{

    iNo = -iNo;
}

for(i = 1; i<=iNo; i++)
{

    printf("%d \t",i);
    
}
for(i = 1; i<=iNo; i++)
{

    printf("* \t",i);
    
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