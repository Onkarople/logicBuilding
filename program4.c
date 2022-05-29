#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;          //4
    struct node *next;    //8
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE Head,int No)
{

   PNODE newn=NULL;

   newn= (PNODE)malloc(sizeof(NODE)); //newn = (struct node*)malloc(12);

   newn->data=No;
   newn->next=NULL;

   if(*Head==NULL)   //LL is empty
   {
     *Head = newn;
   }
   else          //LL contains at leat one node
   {
      newn->next=*Head;
      *Head=newn;
   }
}


   
int SecMax(PNODE head)
{
    int iCnt=0,temp=0;
    int temp1=0;
    temp=head->data;
    while(head!=NULL)
    {
       if(temp<=head->data)
       {
          temp1=temp;
          temp=head->data;
       }     
       else if(head->data>temp1 && head->data<temp)
       {
           temp1=head->data;
       }
       
       head=head->next;

    }
    return temp1;
       

}

int main()
{
  int iRet=0;
  PNODE First=NULL;
   
  InsertFirst(&First,28);  //call by address
  InsertFirst(&First,51);
  InsertFirst(&First,6);
  InsertFirst(&First,11);
  

  iRet=SecMax(First);
  printf("Second maximum number is:%d\n",iRet);




  return 0;
}