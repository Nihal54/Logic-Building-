#include<stdio.h>
int SumFactors(int no)
{

//0(N/2)
printf("Factors are :\n");


int iCnt = 0;
int isum = 0;

for(iCnt = 1; iCnt <=no/2 ; iCnt ++ )
{
    if((no % iCnt )== 0)
    {

        isum = isum + iCnt;

        
    }

}
return isum;
}

int main()
{
int value = 0;
int ret = 0;


printf("Enter Number \n");
scanf("%d", &value);

ret= SumFactors(value);


printf("");


    return 0;
}