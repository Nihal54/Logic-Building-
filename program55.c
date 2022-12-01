#include<stdio.h>

int MinDigit(int iNo)
{
int iDigit = 0,iMin = 9;


if (iNo < 0)
{


    iNo = -iNo;
}

while (iNo != 0)
{


    iDigit = iNo %10;
    if (iDigit <iMin)
    {

        iMin = iDigit;
    }
    
   
    iNo = iNo /10;

}
return iMin;


}



int main()
{


    int iNumber = 0;
    int iRet = 0;

printf("Enter the number ");
scanf("%d",&iNumber);

iRet = MinDigit(iNumber);

printf("The Smallest digit Is : %d\n",iRet);
}