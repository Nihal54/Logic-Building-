//Square Pattern

//Rows    4
//Comlums 4

/*

*   *   *   *
*   *   *   *
*   *   *   *
*   *   *   *

*/




#include<stdio.h>



void Display(int iNo)               //2N
{
int i = 0;
int iCnt = 0;


if(iNo < 0)
{

    iNo = -iNo;
}

for(i = 1; i<=iNo; i++)                 //Outer
{

    
  for(iCnt = 1 ; iCnt<=iNo ; iCnt++)        //Inner 4 of outer
  {


    printf("*\t");              //4 of inner
  }
  printf("\n");
    
}

}

int main()



{

int iValue = 0;

printf("Enter the Number");
scanf("%d",&iValue);

Display(iValue);

    return 0;
}