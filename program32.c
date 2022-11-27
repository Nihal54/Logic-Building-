#include<stdio.h>
void DisplayFactors(int no)
{

//0(N/2)
printf("Factors are :\n");


int iCnt = 0;

for(iCnt = 1; iCnt <=no/2 ; iCnt ++ )
{
    if((no % iCnt )== 0)
    {

        printf("%d\n",iCnt);
    }
}
}

int main()
{
int value = 0;

printf("Enter Number \n");
scanf("%d", &value);

DisplayFactors(value);

    return 0;
}
