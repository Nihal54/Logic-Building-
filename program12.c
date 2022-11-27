// Problem Statement - intput is divisible by 5 or 3;

#include<stdio.h>
#include<stdbool.h>



bool DivisibleByThreeAndFive(int no)
{


    int ans1 = 0;
    int ans2 = 0;

    ans1 = no %3;
    ans2 = no %5;

    if ((ans1 == 0)&&(ans2==0))

{

return true;
}
else {

    return false;
}




}

int main()

{



    int value =0;

   bool bret = false;


    printf("Enetr the Number \n");

    scanf("%d",&value);

  bret = DivisibleByThreeAndFive(value);
  if (bret == true)
  {

    printf("Number is divisible by 3 and 5\n");
  }
else {


    printf("The number is not divisiblke by 3 or 5\n");

}

return 0;


}