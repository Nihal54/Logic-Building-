#include<stdio.h>

int MaxDigit(int iNo)
{
int iDigit = 0,iMax = 0;


if (iNo < 0)
{


    iNo = -iNo;
}

while (iNo != 0)
{


    iDigit = iNo %10;
    if (iDigit > iMax)
    {

        iMax = iDigit;
    }
    //second programm
    //---------------
    if(iMax == 9)
    {
        break;
    }
    //----------------
    iNo = iNo /10;

}
return iMax;


}



int main()
{


    int iNumber = 0;
    int iRet = 0;

printf("Enter the number ");
scanf("%d",&iNumber);

iRet = MaxDigit(iNumber);

printf("The Largest digit Is : %d\n",iRet);
}