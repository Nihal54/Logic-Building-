#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{

    int i = ch;
if (i>='A' && i<='Z')
{

    return TRUE;
}
else{
    return FALSE;
}


}

int main()
{


    char cValue = '\0';
    BOOL bRet = 0;

    printf("Enter the Chracter");
    scanf("%c",&cValue);
    bRet = ChkAlpha(cValue);
    

        if( bRet == TRUE)
        {

            printf("It iS Character");
        }
        else
        {

            printf("It is Not A character");
        }
    
}