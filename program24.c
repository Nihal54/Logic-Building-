#include<stdio.h>

void Display(int value )
{


    int i = 0;
    i = 1;
    while(i <=value)
    
    
    {

        printf("Marvellous :%d\n",i);
        i++;
        sleep(1);
    }
}


int main()

{

int no = 0;

    printf("Enter the number\n");
    scanf("%d",&no);
Display(no);



}