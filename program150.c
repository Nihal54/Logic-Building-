///Toggle


//UPPER TO LOWER

//accept string from user and return small letter ;
#include<stdio.h>

char Toggle(char ch)
{


if(ch>='a'&& ch<= 'z')
{

    return ch-32;
}
if(ch>='A'&& ch<='Z')
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

cRet =  Toggle(cValue);

printf("THe Character int the Lower case is %c:",cRet);


    return 0; 

}