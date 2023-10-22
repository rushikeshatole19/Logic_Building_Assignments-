#include<stdio.h>
//#include <stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkVowel(char ch)
{
    if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch== 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter A Character to chack whether that character is vowel: ");
    scanf("%c",&cValue);

    bRet = chkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}
