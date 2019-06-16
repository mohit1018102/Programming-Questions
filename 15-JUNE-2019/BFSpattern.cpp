#include<iostream>
#include<stdlib.h>
#include<queue>
#include<stdio.h>
using namespace std;

typedef struct tree
{
  int val;
  struct tree *left;
  struct tree *right;
}node;

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
         cout<<rt->val<<" ";
         inorder(rt->right);
     }
}



void BFS(node* root)
{
   queue<node*> q;
   q.push(root);
   node * cnode;
   int count1=0,count2=0;
   while(!q.empty())
   { cnode=q.front();

      q.pop();
       if(cnode->left!=NULL)
          q.push(cnode->left);
        if(cnode->right!=NULL)
           q.push(cnode->right);
        cout<<cnode->val;
     }
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
   cout<<endl;
   BFS(root);
   return 0;
}


