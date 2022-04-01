#include<stdio.h>
#include<stdlib.h>
typedef struct node
 {
     int info;
      struct node *next;
 }NODE;
NODE * ins_first(NODE *first,int data)
 {
     NODE *newnode;
     newnode = (NODE*)malloc(sizeof(NODE));
     newnode->info = data;
     newnode->next = first;
     printf("\nNode with info %d is inserted as first node in the list",data);
     return(newnode);
 } 
NODE * ins_last(NODE *first,int data)
 {
     NODE *newnode,*temp;
     newnode = (NODE*)malloc(sizeof(NODE));
     newnode->info = data;
     newnode->next = NULL;
     if(first == NULL)
     first = newnode; 
     else
    {
        temp = first;
         while(temp->next!=NULL)
         temp = temp->next; 
        temp->next = newnode;
    } 
    printf("\nNode with info %d is inserted as last node in the list",data);
    return(first);
 } 
NODE * del_first(NODE *first)
 {
  NODE *temp;
  if(first == NULL)
  printf("\nEmpty List");
  else
   {
    temp = first;
    first = first->next;
    printf("\nFirst node with info %d is deleted",temp->info); 
    free(temp);
   }
   return(first);
  }  
 NODE * del_last(NODE *first)
  {
   NODE *temp,*prev=NULL;
   if(first == NULL)
   printf("\nEmpty List");
   else
   {
     temp = first;
     while(temp->next!=NULL)
     { prev =temp;
      temp = temp->next; 
     }
     if(prev == NULL) 
     first = NULL;
     else
     prev->next = NULL; 
     printf("\nLast Node with info %d is deleted",temp->info);
     free(temp); 
    }
   return(first);
 } 
   void display(NODE *first)
 {
  if(first == NULL)
   {
     printf("\nEmpty List");
     return;
   } 
   printf("\nListContents:\nBegin->");
   while(first!=NULL)
  {
      printf("%d->",first->info);
      first = first ->next; 
  }
     printf("End");
  }
  int main()
 {
    NODE *first=NULL;
    int choice,data;
    while(1)
    {
         printf("\n\n1:Ins@first\n2:Ins@last\n3:Del@first\n4:Del@last\n5:Display\n6:Exit");
         printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter the data to be inserted: ");
            scanf("%d",&data);
            first = ins_first(first,data); 
             break; 
            case 2: printf("\nEnter the data to be inserted: ");
            scanf("%d",&data);
            first = ins_last(first,data);
            break; 
             case 3: first = del_first(first); 
            break; 
            case 4: first = del_last(first);
            break;
            case 5: display(first); 
             break;
             case 6: exit(0); 
             default: printf("\nInvalid choice");
    }
  } 
  return 0;
}