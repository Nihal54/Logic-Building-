//Accept input from and count freq....

#include<stdio.h>
#include<stdbool.h>

int CountFrequency(char *str, char ch)
{
    
   

    while(*str != '\0')
    {
        if(*str == ch)
        {
          
            break;
        }
        str++;
    }
    if(*str=='\0') {

        return false;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    iRet = CountFrequency(Arr,cValue);

  if(iRet == false)
  {
    printf("Char is not present in string");
  }
  else
  {
    printf("Char is present..");
  }

    return 0;
}