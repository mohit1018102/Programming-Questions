#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;
typedef struct node
{
	int data;
	struct node* left,*right;
}node;

node* newnode(int key)
{
		node* root=(node*)malloc(sizeof(node));
		root->left=root->right=NULL;
		root->data=key;
		return root;
}

node* find(node* head,int n1,vector<node*> &p1)
{
   if(head==NULL) return NULL;
   if(head->data==n1)
   {
     p1.insert(p1.begin()+0,head); return head;
   }
   node* temp=find(head->left,n1,p1);
   node* temp2=find(head->right,n1,p1);
   
   if(temp!=NULL || temp2!=NULL)
  {
     p1.insert(p1.begin()+0,head);
     return head;
  }
  return NULL;

}

node* insert(node *root,int key)
{
	if(root==NULL) 
	{
		root=newnode(key);
	}
	else
	{
		queue<node*> q;
		q.push(root);
		while(!q.empty())
		{
			node* temp=q.front();
			q.pop();
			if(temp->left==NULL)
			{
			  temp->left=newnode(key);
			  break;
		    }
		    else
		       q.push(temp->left);
		       
		    if(temp->right==NULL)
			{
			  temp->right=newnode(key);
			  break;
		    }
		    else
		      q.push(temp->right);
		 }
	}
	return root;
}

void BFS(node* root)
{
	queue<node*> q;
	q.push(root);
	while(!q.empty())
	{
		node* temp=q.front();
		q.pop();
	     	if(temp->left!=NULL)
			{
		       q.push(temp->left);
		    }
		    if(temp->right!=NULL)
			{
			   q.push(temp->right);
		    }
		    cout<<temp->data<<" ";
	}
	cout<<endl;
}
int main()
{
	node* root=NULL;
	root=insert(root,5);
	root=insert(root,4);
	root=insert(root,1);
	root=insert(root,2);
	root=insert(root,7);
	root=insert(root,8);
	BFS(root);
	vector<node*> p;
	find(root,5,p);
	for(int i=0;i<p.size();i++)
	{
		cout<<p[i]->data;
	}
	return 0;
	
}
