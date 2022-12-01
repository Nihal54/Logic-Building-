//Count The String ;
//DryRun is present in book or ScreenShots
//4nd 

#include<stdio.h>

int strlenX(char str[])
{
int iCnt = 0;
int i = 0;

for( i = 0;str[i] != '\0'; i++)
{

    iCnt++;
}
return iCnt;

}

int main()
{


    char Arr[20];
    int iRet = 0;
    printf("Plzz Enter the String :");
    scanf("%[^'\n']s",Arr);
    iRet = strlenX(Arr);

    printf("The number of Chararcters Are %d\n ",iRet);

    return 0;
}