//Diagonal

#include<stdio.h>



void Display(int iRow, int iCol)
{

    int i = 0;
    int j = 0;
    if(iRow != iCol)
    {

        printf("Row number and column number are diff");
        return;
    }

   for(i =1; i<= iRow; i++)
   {

   

    for(j = 1; j<=iCol; j++)
     if(i==j)
    {

        printf("%d\t",i);

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
    printf("Enter the Column\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
}