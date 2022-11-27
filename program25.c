#include<stdio.h>

int Summation()
{

int no1 = 1;
int no2 = 2;
int no3 = 3;
int no4 = 4;
int no5 = 5;


int sum = 0;

sum = no1+no2+no3+no4 +no5;
return sum;

}
int main()
{



    int ret = 0;

    ret = Summation();


    printf("Summation is %d\n",ret );


    return 0;
}