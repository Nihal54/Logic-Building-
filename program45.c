//Accept no. fro user and count no. of digits in that number 

#include<stdio.h>

int CountDigits(int iNo)
{

int iDigit = 0;
int iCnt = 0;


if(iNo==0)      //filter
{

    return 1;
}


if(iNo<0)               //Updator
{

    iNo = - iNo;
}


while ( iNo != 0)
{
iDigit = iNo % 10;
   
    iNo = iNo/10;
    iCnt++;
}
return iCnt ;

}

int main()

{
int iValue = 0;
int iRet = 0;

printf("Enter the the number");

scanf("%d",&iValue);

iRet = CountDigits(iValue);

printf("The number of digits are %d:",iRet);

    return 0;

}