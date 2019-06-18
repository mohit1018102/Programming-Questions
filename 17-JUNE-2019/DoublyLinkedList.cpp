#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node{
 int data;
 struct node *next,*prev;
}node;


node* insertf(node *head,int key)
{
      node* temp;
      if(head==NULL)
      { temp=(node*) malloc(sizeof(node));
        temp->data=key;
        temp->next=temp->prev=NULL;
        head=temp;
      }    
     else
     {
       temp=(node*)malloc(sizeof(node));
       temp->data=key;
       head->prev=temp;
       temp->next=head;
       head=temp;
       temp->prev=NULL;
     }
   return head;
}

node* insertb(node* head,int key)
{
   node *temp;
   node *temp2;
   if(head==NULL) 
   {
        temp=(node*)malloc(sizeof(node));
        temp->data=key;
        temp->next=temp->prev=NULL;
        head=temp;
   }
   else
      { temp2=head;
        while(temp2->next!=NULL)
        {
           temp2=temp2->next;
        }
        temp=(node*)malloc(sizeof(node));
        temp->data = key;
        temp->next = NULL;
        temp->prev = temp2;
        temp2->next = temp;
      }

   return head;
}

node* insertbefore(node* head,int key,int bkey)
{
   node *temp,*temp2;
   
   if(head==NULL) 
   {
        temp=(node*) malloc(sizeof(node));
        temp->data=key;
        temp->next=temp->prev=NULL;
        head=temp;
    }
    else
      if(head->data==bkey)
      {
           return insertf(head,key);
      }
      else
       {
          temp2=head;
          while(temp2!=NULL && temp2->data!=key)
          {
              temp2=temp2->next;
          }
          if(temp2!=NULL)
          {
                temp=(node*)malloc(sizeof(node));
                temp->data=key;
                temp->next=temp2;
                temp2->prev=temp2->prev;
                temp2->prev->next=temp;
                temp2->prev=temp;
          }
          else
           {
               cout<<"Key is not found \n";
           }
       }
           
   return head;
}


node* deletef(node* head)
{
    if( head==NULL)
     {
        cout<<"LinkedList is empty\n";
     }
     else
     {
         node* temp=head;
         head=head->next;
         temp->next=temp->prev=NULL;
         head->prev=NULL;
         free(temp);
     }

   return head;
}


node* deleteb(node* head)
{   node *temp;
    if( head==NULL)
     {
        cout<<"LinkedList is empty\n";
     }
     else
       if(head->next==NULL)
       {
          temp=head;
          head=head->next;
          free(temp);
       }
     else
       { node* temp;
         temp=head;
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
          temp->prev->next=NULL;
          temp->prev=NULL;
          free(temp);
       }

    return head;
}


node* deletebefore(node* head,int bkey)
{
   node* temp;

    if( head==NULL)
     {
        cout<<"LinkedList is empty\n";
     }
     else
       if(head->data==bkey && head->next==NULL)
       {
          temp=head;
          head=head->next;
          free(temp);
       }
       else
        if(head->data==bkey)
        {
          temp=head;
          head=head->next;
          temp->next=NULL;
          head->prev=NULL;
          free(temp);
        }
        else
        {
           temp=head;
           while(temp!=NULL && temp->data!=bkey)
           { temp=temp->next;
           }

           if(temp!=NULL)
           {
               temp->prev->next=temp->next;
               temp->next->prev=temp->prev;
               temp->next=temp->prev=NULL;
               free(temp);
           }
           else
           {
              cout<<"KEY is not found\n";
           }
        }
      return 0;
}


void display(node* head)
{
   while(head!=NULL)
   { 
     cout<<head->data<<" ";
     head=head->next;
   }
  cout<<"\n-------------------------\n";
}

int main()
{
   node *head=NULL;
   int choice,key,bkey;

   do
   {
      cin>>choice;
     
      switch(choice)
      {
         case 1: cin>>key;
                 head=insertf(head,key);
                 break;
         case 2: cin>>key;
                 head=insertb(head,key);
                 break;
         case 3: cin>>key;
                 cin>>bkey;
                 head=insertbefore(head,key,bkey);
                 break;
          case 4: head=deletef(head);
                  break;
          case 5: head=deleteb(head);
                  break;
          case 6: cin>>bkey;
                  head=deletebefore(head,bkey);
                  break;
          case 7: display(head);
                  break;
       }

    }while(choice!=8);
   
   display(head);
   return 0;
}

   
    
                
