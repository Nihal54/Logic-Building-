//accept one number and return the number of index at which that number occurs in LAST ;
//removed previous code if else condition;

#include<stdio.h>
#include<stdlib.h>


// Step 5 : Perform the operation on array
int CheckLastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0 ;

    for(iCnt=iSize-1;iCnt>=0;iCnt--)
    {
       
       if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    
        return iCnt;
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0;
   int bRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("Enter the element to findout the occurance : \n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    bRet = CheckLastOccurance(ptr, iLength, iValue);
    if(bRet == -1)
    {
         printf("There is no %d in the array\n",iValue);
    }
    else
    {
       printf("%d is occured at last index no. %d:",iValue,bRet);
    }

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}