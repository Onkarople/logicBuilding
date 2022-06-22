//write a program which accept number from user and print factors of that number

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt=0;

    if(iNo<=0)
    {
        iNo=-iNo;

    }

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt==0)&& (iCnt%2)==0)
        {
            printf("%d  ",iCnt);
        }
    }
}



int main()
{
   int iValue=0;

   printf("Enter number\n");
   scanf("%d",&iValue);


   DisplayEvenFactor(iValue);


    return 0;
}