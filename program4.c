#include<stdio.h>


int AddditionOfNumbers(int no1, int no2)
{


    int ans = 0;

    ans = no1 + no2 ;

    return ans ;
}
int main()

{

    int value1  = 0;
    int value2 = 0;
    int ret = 0;

    printf("Enter first number \n");
    scanf("%d",&value1);


    printf("Enter the second number \n");
    scanf("%d",&value2);

    ret = AddditionOfNumbers(value1,value2);

    printf("The answer is %d\n",ret);
    return 0;

}

