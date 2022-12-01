//Accept String from array 
//Accept character 
//return count of that character in string

#include<stdio.h>

int CountCapital(char *str,char ch)
{
  int iCnt = 0;
  
  while(*str != 0)
  {
    if(*str == ch)
    {
      iCnt++;
    } 
    str++;
  }

  return iCnt;
}

int main()
{
  char Arr[20];
  char cValue = '\0';
  int iRet = 0;
  
  printf("Enter String :");
  scanf("%[^\n]s",Arr);
  
  printf("Enter Character :");
  scanf(" %c",&cValue);
  
  
  iRet = CountCapital(Arr,cValue);
  printf("Frequncy of in String  is :%d\n",iRet);

  return 0;
}