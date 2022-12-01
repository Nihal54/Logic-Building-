//Check Digit;

#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char ch)
{

    if((ch>=48)&&ch<=59)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Plz enter the one character ");
    scanf("%c",&cValue);

    bRet= CheckDigit(cValue);
    if(bRet == true)
    {

        printf("%c is Digit",cValue);

    }
    else
    {
       printf("%c is not Digit latter",cValue); 
    }

    return 0;
}