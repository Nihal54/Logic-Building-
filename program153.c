//Toggled

#include<stdio.h>

void strtgl(char *str)
{
    char c = *str;
while (*str!= '\0')


    {
        if(*str>= 'a'&& *str <= 'z')
        {

           *str= *str-32; 
        }
         else if(*str>= 'A'&& *str <= 'Z')
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

strtgl(Arr);

printf("String After Conversion is :%s \n ",Arr);

    return 0;
}