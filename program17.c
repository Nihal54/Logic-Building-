//Demonstration of iteration using for loop

#include<stdio.h>



void Display(int value)
{
int iCnt = 0;


for (iCnt = 1; iCnt <= value;iCnt++)
{

printf("Hey Nihal...\n");
sleep(2);
}
}
int main()
{


    int no =0;

   


    printf("Enter the number of iterartion \n");
    scanf("%d",&no);
 Display(no);

    return 0;
}