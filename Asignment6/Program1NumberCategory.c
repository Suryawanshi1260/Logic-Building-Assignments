#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo <= 50)
    {
        printf("The Number Is Small \n");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("The Number Is Medium \n");
    }
    else
    {
        printf("The Number Is Large \n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;

}
