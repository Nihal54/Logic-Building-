#include<stdio.h>

int Summation(int no )
{




int sum = 0;
int i = 0;


for (i = 1; i <= no; i++)
{

    sum = sum + i ;
}

return sum;

}
int main()
{


int value;
    int ret = 0;

    printf("Enter the number\n");
    scanf("%d",&value);

    ret = Summation(value);


    printf("Summation is %d\n",ret );


    return 0;
}