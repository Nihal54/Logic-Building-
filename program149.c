//UPPER TO LOWER

//accept string from user and return small letter ;
#include<stdio.h>

char ToLowerX(char ch)
{


if(ch>='A'&& ch<= 'Z')
{

    return ch+32;
}


else{

    return ch;
}


}

int main()
{

char cValue = '\0';
char cRet = '\0';
printf("Enter the character ");
scanf("%c",&cValue);

cRet =  ToLowerX(cValue);

printf("THe Character int the Lower case is %c:",cRet);


    return 0; 

}