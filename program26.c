#include<stdio.h>

int Summation()
{

int no1 = 1;
int no2 = 2;
int no3 = 3;
int no4 = 4;
int no5 = 5;


int sum = 0;

sum = sum + no1;
sum = sum + no2;
sum = sum + no3;
sum = sum + no4;
sum = sum + no5;

return sum;

}
int main()
{



    int ret = 0;

    ret = Summation();


    printf("Summation is %d\n",ret );


    return 0;
}