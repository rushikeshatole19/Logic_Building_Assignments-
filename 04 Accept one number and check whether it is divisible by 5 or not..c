// Problem Statement :Accept one number and check whether it is divisible by 5 or not.
#include<stdio.h>
#include<stdbool.h>

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true ;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter A Number");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible By 5");
    }
    else
    {
        printf("Not Divisible By 5");
    }
    return 0;
}

