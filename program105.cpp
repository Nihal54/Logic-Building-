/*
r 4
c 4

*#*#
*#*#
*#*#
*#*#


*/



#include<stdio.h>

void Display(int iRow, int iCol)
{

    int i = 0;
    int j = 0;

    for(i = 1; i<= iRow; i++)
    {
       

        for(j = 1; j<=iCol; j++)

        if(j%2==0)
        {
            printf("#\t");
        }
        else{
            printf("*\t");
        }

        
        printf("\n");

    }
    

   
}

int main()
{

    int iValue1=0;
    int iValue2=0;

    printf("Enter the Row\n");
    scanf("%d",&iValue1);
    printf("Enter the Column");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
}