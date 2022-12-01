//Accept n numbr and perform the additionn...


#include<stdio.h>



int main()
{



    int Arr[5];
    int i = 0;
    printf("Enter the elements :");

    for(i = 0;i < 5 ; i ++)
    {

        scanf("%d",&Arr[i]);
    }


    printf("Elements from array are :\n ");
    for (i = 0 ; i< 5 ; i++)
    {

        printf("%d\n",Arr[i]);
    }

    return 0;
}