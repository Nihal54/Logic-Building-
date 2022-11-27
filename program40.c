///Ulta 


#include<stdio.h>
void reverse(int value)
{
int iCnt = 1;

    printf("------------------------------\n");
    
     iCnt = value;
    while( iCnt>=1)
    
    {


        printf("%d\t",iCnt);
        iCnt --;
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