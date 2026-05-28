#include<stdio.h>

void NonFact(int iNO)
{
   int iCnt = 0;

   for(iCnt = 1 ; iCnt <= iNO; iCnt++)
   {
    if((iNO % iCnt) !=0)
    {
        printf("%d\t",iCnt);
    }
   }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    NonFact(iValue);


    return 0;
}
