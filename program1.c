//write a program which accept one number from user and print that number of even numbers on screen
#include<stdio.h>


void printEven(int iNo)
{

   int iCnt=0;
   int eNum=0; 
   if(iNo<=0)
   {
       return;
   }

   
     for(iCnt=1;iCnt<=iNo;iCnt++)
     { 
         eNum=eNum+2;
         printf("%d\n",eNum);
        
     }

}


int main()
{
   int iValue=0;

   printf("Enter NUmber\n");
   scanf("%d",&iValue);


    printEven(iValue);
  

    return 0;
}