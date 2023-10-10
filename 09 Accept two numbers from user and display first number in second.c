// Problem Statement : Accept two numbers from user and display first number in second number of times.
#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iFrequency; iCnt++)
    {
        printf("%d",iNo);
    }
    return ;
}
int main()
{
    int iValue1 = 0;
    int iCount = 0;

    printf("Enter A Numbers : ");
    scanf("%d",&iValue1);

    printf("Enter A Frequency : ");
    scanf("%d",&iCount);

    Display(iValue1,iCount);

    printf("\n");

    return 0 ;
}

/*Input : 12 5
Output : 12 12 12 12 12
Input : -2 3
Output : -2 -2 -2
Input : 21 -3
Output : 21 21 21
Input : -2 0
Output :       */