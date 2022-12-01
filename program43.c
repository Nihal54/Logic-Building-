#include<stdio.h>


void DisplayOddFactors(int no)
{



    int iCnt = 0;


    for (iCnt = 2; iCnt <= no/2; iCnt ++ )
    {

        if ((no % iCnt== 0) &&(iCnt % 2 !=0))

        {
printf("%d\n",iCnt);
        }
    }
}


int main()

{




    int value = 0;

    printf("Enter the number ;\n");

    scanf("%d",&value);

    DisplayOddFactors(value);


    return 0;
}