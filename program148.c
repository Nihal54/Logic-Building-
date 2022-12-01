//accept string from user and return small letter ;
#include<stdio.h>

char ToUpperX(char ch)
{

char c='d';
if(ch>='a'&& ch<= 'z')
{

    return ch-32;
}

if(ch=='d')
{
    return c;
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

cRet =  ToUpperX(cValue);

printf("THe Character int the upper case is %c:",cRet);


    return 0; 

}