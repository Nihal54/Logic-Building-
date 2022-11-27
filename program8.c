////////////////////////////////////////////////////////////////
// Step to follow while programming
////////////////////////////////////////////////////////////////


//1 understand the problem statement and 
//2 write the algorithm
//3 decide the programming language 
//4 write the program
//5 test the programm

/////////////////////////////////////////////////////////////////////////////

// Problem statemennt -Accept number from user and check weather it is divisible by 5 or not 

/////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////

/// ALGORITHM

///////////////////////////////////////////////////////////////////////////////


/*

START
    Accept number from user as NO
    divide that no by 5 check the value of remender
    If the value is 0
            then display as NO is divisible by %
            otherwise as NO is not divisible by 5

END

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////

// function name- Divisible by 5
// Description- To check weather input is divisible by 5 or not 
// input - integer 
// output - iteger 


int DivisibleByFive(int no)
{

int ans = 0;
ans = no % 5;
if (ans == 0)
{
    return 1;
}
else
{
    return 0;
}
}


int main()

{



    int value = 0;

    int ret =0 ;


    printf("Enetr the number\n");
    scanf("%d",&value);

    ret = DivisibleByFive(value);

    if(ret == 1)
    {
        printf("%d It is divisible by 5\n",value);

    }
    else{

        printf("It is not divible by 5\n",value);


    }






}