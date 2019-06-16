#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node
{
	int value;
	struct node* next;
}node;
void insertf(node** head,int value)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->value=value;
	temp->next=*head;
	*head=temp;
}

void insertb(node** head,int value)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->value=value;
	temp->next=NULL;
	node* temp2;
	if(*head==NULL) 
	{
		temp->next=NULL;
		*head=temp;
	}
	else
	{    temp2=*head;
	     
		 while(temp2->next!=NULL)
	     { temp2=temp2->next;
		 }
		 temp2->next=temp;
	}
}

void display(node * head)
{   cout<<endl;
    cout<<"----------------------------------------\n";
	while(head!=NULL)
	{
		cout<<head->value<<" ";
		head=head->next;
	}
	cout<<"\n----------------------------------------\n";
	cout<<endl;
}

void insertionbefore(node** head,int value,int bval )
{
	node* temp,*temp2;
	if(*head==NULL) 
	{   
		cout<<"Linkedlist is empty\n";
	}
	else
	{
		temp=(node*)malloc(sizeof(node));
     	temp->value=value;
     	if((*head)->value==bval)
     	{
     		temp->next=*head;
     		*head=temp;
		}
		else
		{ temp2=*head;
		  while(temp2->next!=NULL && (temp2->next)->value!=bval)
		  {
		  	temp2=temp2->next;
		  }
		  if(temp2->next!=NULL)
		  {
		  	temp->next=temp2->next;
		  	temp2->next=temp;
		  }
		  else
		  {
		  	cout<<"Element is not exist in linkedlist\n";
		  	
		  }
			
		}
	}
	
}

void deletionf(node** head)
{
	if(*head==NULL) return;
	else
	{
		node* temp;
		temp=*head;
		*head=(*head)->next;
		temp->next=NULL;
		free(temp);
	}
}

void deletionb(node** head)
{  if(*head==NULL) return;
   else if((*head)->next==NULL)
	{
		node* temp;
		temp=*head;
		*head=(*head)->next;
		temp->next=NULL;
		free(temp);
	}
   else
   {
   	 node *temp,*temp2;
   	 temp=*head;
   	 while((temp->next)->next!=NULL)
   	 {
   	   temp=temp->next;	
     }
     temp2=temp->next;
     temp->next=NULL;
     free(temp2);
   }
	
}

int main()
{
	node* head=NULL;
	int choice,val,bval;
	do{
		cout<<"Enter your choice : ";
		cin>>choice;
		cout<<endl;
		switch(choice)
		{
			case 1: cin>>val;
			         insertf(&head,val);
				break;
			case 2:cin>>val; 
			       insertb(&head,val);
				break;
			case 3: display(head);
				break;
			case 4: cin>>val;
			        cin>>bval;
			        insertionbefore(&head,val,bval );
				break;
			case 5: deletionf(&head);
			        break;
			case 6: deletionb(&head);
			        break;
		    case 7: break;
				
		}
	   
	}while(choice!=7);
	
	return 0;
}
