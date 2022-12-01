#include<stdio.h>
void DisplayEvenFactors(int no)
{
int iCnt = 0;

for (iCnt = 1; iCnt <= (no/2); iCnt = iCnt + 2 )
 {

        if ((no % iCnt)== 0)

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

    DisplayEvenFactors(value);

    return 0;
}