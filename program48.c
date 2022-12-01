#include<stdio.h>

void CountEvenOddDigits(int iNo)

{
int iEvenCnt= 0;
int iOddCnt = 0;
int iDigit = 0;

if(iNo == 0){

    

    iEvenCnt++ ;            //iEven++;
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
iEvenCnt++;
        
    }
    else{

        iOddCnt++;
    }

   iNo = iNo/10;

   

}
printf("The Even number count is :%d\n",iEvenCnt++);
printf("The Even number count is :%d\n",iOddCnt++);
} 

int main()
{



    int iNumber = 0;
    



    printf("Enter the number");

    scanf("%d",&iNumber);
    CountEvenOddDigits(iNumber);


   



}