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


   
void DisplayPerfect(PNODE head)
{
    int iCnt=0,iSum=0;
    int temp=0;
    while(head!=NULL)
    {
      temp=head->data;
      iSum=0;
    for(iCnt=1;iCnt<=(temp/2);iCnt++)
    {  
      
        if((temp%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
    }
 
    if(iSum==temp)
    {
    printf("%d\n",temp);
    }
    head=head->next;
    }
   
}

int main()
{

  PNODE First=NULL;
   
  InsertFirst(&First,28);  //call by address
  InsertFirst(&First,51);
  InsertFirst(&First,6);
  InsertFirst(&First,11);
  

  DisplayPerfect(First);


  return 0;
}