#include<stdio.h>

void strlwr(char *str)
{
while (*str!= '\0')
    {
        if(*str>= 'A'&& *str <= 'Z')
        {

           *str= *str+32; 
        }
      

         str++;
    }
}

int main()
{
char Arr[20];

printf("Plz enter the String\n");
scanf("%[^'\n']s",Arr);

strlwr(Arr);

printf("String After Conversion is :%s \n ",Arr);

    return 0;
}