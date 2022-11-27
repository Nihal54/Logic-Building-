#include<stdio.h>

int Factorial(int no)
{




int ifact= 1;
int icnt = 0;


for (icnt = 1; icnt <=no; icnt++)
{

    ifact = ifact * icnt ;
}

return ifact;

}
int main()
{


int value= 0;
    int ret = 0;

    printf("Enter the number :\n");

  scanf("%d",&value);

    ret = Factorial(value);


    printf("Factorial of %d is   %d\n",value,ret );


    return 0;
}