#include<stdio.h>


int SumNonFactors(int no)



{


int i =0;
int sum=0;

for (i = 1; i < no ; i ++)
{
if ( ( i % no  )!=0)
{


    sum = sum + i;
}

}
return sum;

}
int main()
{


int value = 0;
int iret = 0;

printf("Enter the number \n");

scanf("%d",&value);



iret = SumNonFactors(value);

printf("Summation of non factors is %d \n",iret);
    return 0;


}