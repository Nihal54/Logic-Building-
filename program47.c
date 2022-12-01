//Accept number from user and count number of even digit;;
#include<stdio.h>

int CountEvenDigit(int iNo)

{
int iCnt= 0;
int iDigit = 0;
int even = 0;
if(iNo == 0){

    return 1;
}



if (iNo < 0)
{

    iNo = -iNo;
}
while (iNo != 0)
{


     iDigit = iNo % 10;
   

    if((iDigit % 2)==0)
    {
iCnt++;
        
    }

   iNo = iNo/10;
}
 return iCnt;

} 

int main()
{



    int iNumber = 0;
    int ret = 0;



    printf("Enter the number");

    scanf("%d",&iNumber);
    ret = CountEvenDigit(iNumber);


    printf("Even count  is %d",ret);



}