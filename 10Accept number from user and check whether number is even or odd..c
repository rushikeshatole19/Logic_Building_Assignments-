// Problem Statement : Accept number from user and check whether number is even or odd.
#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

    return ;
}
int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("\nEnter number = ");
    scanf( "%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
        printf("Given Number Is Even");
    else
        printf("Given Number Is Odd");

    return 0;
}
