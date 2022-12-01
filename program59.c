


#include<stdio.h>

int Addition(int Data[],int iSize)
{
int iCnt = 0, iSum = 0;
for(iCnt = 0; iCnt < iSize ; iCnt++)
{
iSum = iSum + Data[iCnt];

}
return iSum;

}



int main()
{



    int Arr[5];
    int i = 0, iRet = 0;
    printf("Enter the elements :");

    for(i = 0;i < 5 ; i ++)
    {

        scanf("%d",&Arr[i]);
    }


    printf("Elements from array are :\n ");
    for (i = 0 ; i< 5 ; i++)
    {

        printf("%d\n",Arr[i]);
    }
    iRet = Addition(Arr,5);

    printf("Addition of all numbers is :%d\n",iRet);

    return 0;
}