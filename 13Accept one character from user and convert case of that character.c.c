#include<stdio.h>

char DisplayConvert(char cValue)
{
     if(cValue >=  'A' && cValue  <=  'Z')
     {
          cValue = cValue + 32;
          printf("Lower Case Character is %c",cValue);
     }
     else if( cValue >= 'a' && cValue <= 'z')
     {
          cValue = cValue - 32;
          printf("Upper Case Character is %c",cValue);
     }
     return;
}
int main()
{
     char cValue = 0;

     printf("Enter character\n");
     scanf("%c",&cValue);

     DisplayConvert(cValue);

     return 0;
}
