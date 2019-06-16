#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
  int val;
  struct tree *left;
  struct tree *right;
}node;

void BFS(node *rt)
{
	 if(rt==NULL) return;
	
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
   insert(&root,2);
   insert(&root,3);
   insert(&root,4);
   insert(&root,5);
   
   inorder(root);

   printf("\nheight : %d ",height(root));
   printf("\ndepth : %d ",height(root));
   printf("\nheight of node 4: %d ",heightNode(root,4));
   printf("\ndepth of node 4: %d ",depthNode(root,4,0));
   
   
   return 0;
}
   
   
