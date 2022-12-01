#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
int iCnt = 0, iSum = 0;
for(iCnt = 0; iCnt < iSize ; iCnt++)
{
iSum = iSum + Arr[iCnt];

}
return iSum;

}
int main()
{
    int *ptr = NULL;
    int Arr[5];
    int i = 0, iRet = 0,iLength =0;

    printf("Enter number of elements you want to store");
scanf("%d",&iLength);

ptr = (int *)malloc(iLength*sizeof(int));

    printf("Enter the elements :");

    for(i = 0;i < iLength ; i ++)
    {

        scanf("%d",&ptr[i]);
    }


    printf("Elements from array are :\n ");
    for (i = 0 ; i< 5 ; i++)
    {

        printf("%d\n",ptr[i]);
    }
    iRet = Addition(ptr,iLength);

    printf("Addition of all numbers is :%d\n",iRet);
free(ptr);
    return 0;
}