//Square Pattern

//Rows    4
//Comlums 4

/*

*   *   *   *
*   *   *   *
*   *   *   *
*   *   *   *

*/




#include<stdio.h>



void Display(int iRow, int iCol)               //2N
{
int i = 0;
int j = 0;


if(iRow<0)
{

    iRow =-iRow;
}
if(iCol<0)
{

    iCol = -iCol;
}


for(i = 1; i<=iRow; i++)
{

for(j = 1; j<=iCol;j++)
{

    printf("*\t");
}
printf("\n");
sleep(1);

}




}

int main()



{

int iValue = 0;
int iValue2= 0;

printf("Enter the Number of Rows");
scanf("%d",&iValue);
printf("Enter the Number of Rows");
scanf("%d",&iValue2);

Display(iValue,iValue2);

    return 0;
}