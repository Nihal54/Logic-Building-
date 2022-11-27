#include<stdio.h>

void DisplayTable(int no)


{
int iCnt = 0;


printf("The Table of %d is\n ",no);
printf("-----------------------------\n");


for ( iCnt = 1; iCnt <= 10; iCnt ++)
{


     printf("%d\n", no * iCnt);
     

    
}

    
}


int main ()
{




    int no = 0;
    

   printf("Enter the number \n");
   scanf("%d",&no);

   DisplayTable(no);

   return 0;







}