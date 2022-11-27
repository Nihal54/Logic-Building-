#include<stdio.h>
#include<stdbool.h>
int SumFactors(int no)
{




int iCnt = 0;
int isum = 0;

for(iCnt = 1; iCnt <=no/2 ; iCnt ++ )
{
    if((no % iCnt )== 0)
    {

        isum = isum + iCnt;

        
    }

}
return isum;
}

bool checkperfect(int iData){



    int ans = 0;
    ans = SumFactors(iData);

    if(ans == iData)
    {


        return true;
    }
    else {


        return false;
    }
}

int main()
{
int ivalue = 0;
bool bRet = false;

printf("Enter Number \n");
scanf("%d", &ivalue);

bRet = checkperfect(ivalue);

if ( bRet == true)
{

printf("  %d is Perfect Number\n",ivalue);

}
else {



    printf("%d is not Perfect number\n",ivalue);
}



    return 0;
}