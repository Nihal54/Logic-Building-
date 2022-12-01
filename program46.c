//Accept number and return the number sum of digits;



#include<stdio.h>

int SumDigit(int iNo)

{
int iSum = 0;
int i = 0;
if (iNo < 0)
{

    iNo = -iNo;
}
while (iNo != 0)
{


    int iDigit = iNo % 10;
    iNo = iNo / 10;

    iSum = iSum + iDigit;
}
return iSum;

} 

int main()
{



    int iNumber = 0;
    int ret = 0;



    printf("Enter the number");

    scanf("%d",&iNumber);
    ret = SumDigit(iNumber);


    printf("Addition is %d",ret);



}