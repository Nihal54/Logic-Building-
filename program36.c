#include<stdio.h>


void DisplayNonFactors(int no)



{


int i =0;

for (i = 1; i < no ; i ++)
{
if ( ( i % no  )!=0)
{


    printf("%d\n",i);
}

}


}
int main()
{


int value = 0;

printf("Enter the number \n");

scanf("%d",&value);



DisplayNonFactors(value);
    return 0;


}