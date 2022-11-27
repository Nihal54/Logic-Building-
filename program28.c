#include<stdio.h>

int Summation()
{




int sum = 0;
int i = 0;


for (i = 1; i <= 5; i++)
{

    sum = sum + i ;
}

return sum;

}
int main()
{



    int ret = 0;

    ret = Summation();


    printf("Summation is %d\n",ret );


    return 0;
}