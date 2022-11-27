
//Demonstration of iteration using for loop
#include<stdio.h>

void Display(int value)
{
int iCnt = 0;
iCnt = 1;

while(iCnt <= value)
{

    printf(" Jay  Ganesh  WhileLoop\n");
    iCnt ++;
}
}

int main()
{

int no = 0;

printf("Enter the Value\n ");
scanf("%d",&no);


Display(no);

return 0;
}