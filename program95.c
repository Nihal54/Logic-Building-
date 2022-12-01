//  4
//  A   B   C   D


#include<stdio.h>



void Display(int iNo)               //2N
{
int i = 0;
char ch = 'A';

if(iNo < 0)
{

    iNo = -iNo;
}

for(i = 1; i<=iNo; i++)
{

    printf("%c \t",ch);
    ch++;
    
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