#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *left,*right;
}node;

node* newnode(int data)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->left=temp->right=NULL;
	temp->data=data;
	return temp;
}

node* createBST(int a[],int n)
{
	 node *root=newnode(a[0]);
	
		for(int i=1;i<n;i++)
		{
			node* temp=root;
			
			while(1)
			{ 
				if(temp->data>a[i] && temp->left!=NULL) temp=temp->left;
				else
				if(temp->data<a[i] && temp->right!=NULL) temp=temp->right;
				else
				   if(temp->data>a[i])
				   { temp->left=newnode(a[i]);
				     break;
				   }
				   else
				   {
				   	temp->right=newnode(a[i]);
				   	break;
				   }
			}
		}
		
		return root;
	
}
void inorder(node* root)
{
	if(root==NULL) return;
	else
	{
		
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

int main()
{   int n;
     cin>>n;
     node* root=NULL;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	root=createBST(arr,n);
	inorder(root);
	return 0;
}
