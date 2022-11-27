#include<stdio.h>


int multiplication(int value1, int value2)

{
int ans = 0;
ans = value1 * value2;

return ans;

}

int main()

{

int no1 = 0;
int no2= 0;
int mult = 0;

printf("Enter first number \n ");

scanf("%d",&no1);

printf("Enter Second number \n ");

scanf("%d",&no2);

mult = multiplication(no1,no2);

printf("Multiplication is %d \n",mult);

return 0;

}
