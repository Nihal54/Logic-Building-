//

#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char ch)
{

    if((ch>='a')&&ch<='z')
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

    bRet= CheckSmall(cValue);
    if(bRet == true)
    {

        printf("%c is small case latter",cValue);

    }
    else
    {
       printf("%c is not small case latter",cValue); 
    }

    return 0;
}