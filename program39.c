///Ulta 


#include<stdio.h>
void reverse(int value)
{


    printf("------------------------------\n");
    
    int iCnt = 0;
    for(iCnt = value ; iCnt>=1 ; iCnt--)
    {


        printf("%d\t",iCnt);
    }
     printf("\n------------------------------\n");
    



}

int main()
{



int no = 0;


printf("Enter the number :");
scanf("%d",&no);


reverse(no);

}