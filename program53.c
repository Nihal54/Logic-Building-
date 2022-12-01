//Palindrom or not; using for
//Palindrom or not;

#include<stdio.h>
#include<stdbool.h>

bool CheckPelindram(int iNo)
{

int iDigit = 0,iRev = 0;
int iTemp=iNo;



for(iRev = 0; iNo != 0 ;  iNo = iNo /10)
{
//hum jaise ka vaisa rkhke ;iNo != 0 ;rkh sakt rhe

    iDigit = iNo %10;
    iRev = (iRev *10)+iDigit;
   
}

if(iTemp==iRev)
    {

        return true;
    }
    else{

        return false;
    }
      ///Return (iTemp == Rev)
    
   
}
    






int main()
{


    int iValue = 0;
    bool iRet = 0;


    printf("Enter the number : \n");
    scanf("%d",&iValue);


    iRet=CheckPelindram(iValue);

    if(iRet == true)
    {

        printf("%d is The pallindrome number");
    }
    else{


        printf("The number is not pallindrom");
    }

  
}