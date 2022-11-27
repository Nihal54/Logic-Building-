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
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////

// function name- Divisible by 5
// Description- To check weather input is divisible by 5 or not 
// input - integer 
// output - iteger 


bool DivisibleByFive(int no)
{

int ans = 0;
ans = no % 5;
if (ans == 0)
{
    return true;
}
else
{
    return false;
}
}


int main()

{



    int value = 0;

    bool bret =0 ;


    printf("Enetr the number\n");
    scanf("%d",&value);

   bret = DivisibleByFive(value);

    if(bret == false)
    {
        printf("%d It is not divisible by 5\n",value);

    }
    else{

        printf("It is divible by 5\n",value);


    }

return 0;




}