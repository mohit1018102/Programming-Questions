#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;

typedef struct tree
{
  int val;
  struct tree *left;
  struct tree *right;
}node;

node* LCA(node* head,int n1,int n2)
{
	if(n1<=head->val && n2>=head->val) return head;
	else if(n2<=head->val) LCA(head->left,n1,n2);
	else
	  if(n1>=head->val) return LCA(head->right,n1,n2);
}

void BFS(node *rt)
{
	 if(rt==NULL) return;
	 queue<node*> q;
	 q.push(rt);
	 while(!q.empty())
	 {
	 	node* temp=q.front();
	 	q.pop();
	 	if(temp->left!=NULL) q.push(temp->left);
	 	if(temp->right!=NULL) q.push(temp->right);
	 	cout<<temp->val<<" ";
	 }
	
}

void insert(node** rt,int val)
{ node* temp;
    if(*rt==NULL)
    { temp=(node*)malloc(sizeof(node));
      temp->val=val;
      temp->left=temp->right=NULL;
      *rt=temp;
    }
    if(val>(*rt)->val)
    {
         insert(&((*rt)->right),val);
    }
    else if(val<(*rt)->val)
       {
             insert(&((*rt)->left),val);
       }

   return;
       
}

void inorder(node *rt)
{
    if(rt==NULL) return;
    else
     {
         inorder(rt->left);
         printf("%d ",rt->val);
         inorder(rt->right);
     }
}
int max(int a,int b)
{
    return (a>b)?a:b;
}

int height(node *rt)
{
   if(rt==NULL) return 0;
   else
   {
      return max(height(rt->left),height(rt->right))+1;
   }
}

int heightNode(node *rt,int key)
{
  if(rt==NULL) return 0;
  if(rt->val==key) return height(rt);
  return max(heightNode(rt->left,key),heightNode(rt->right,key));
}

int depthNode(node *rt,int key,int depth)
{
  if(rt==NULL) return 0;
  if(rt->val==key) return depth;
  return max(depthNode(rt->left,key,depth+1),depthNode(rt->right,key,depth+1));
}

int main()
{
   node* root=NULL;
   
   insert(&root,1);
   insert(&root,5);
   insert(&root,2);
   insert(&root,8);
   insert(&root,0);
   
   inorder(root);

   printf("\nheight : %d ",height(root));
   printf("\ndepth : %d ",height(root));
   printf("\nheight of node 4: %d ",heightNode(root,4));
   printf("\ndepth of node 4: %d\n ",depthNode(root,4,0));
   printf("\nBFS Traversal : \n");
   BFS(root);
   printf("\nleast common ancestor 2 and 8 :");
   cout<<LCA(root,2,8)->val;
   printf("\nleast common ancestor 0 and 8 :");
   cout<<LCA(root,0,8)->val;
   printf("\nleast common ancestor 5 and 1 :");
   cout<<LCA(root,5,1)->val;
   
   return 0;
}
