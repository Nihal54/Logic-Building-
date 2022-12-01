#include<stdio.h>
//accept full name from user and Display it on screen;



int main()
{

char Arr[30] ;

    printf("Enter Your Full Name :");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

   printf("Your Full Name is:\n%s",Arr);


}

//%[^'\n']s
//"%[^'\n']s"
//"%[]"