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


node* find(node* head,int n1,vector<node*> &p1)
{
   if(head==NULL) return NULL;
   if(head->val==n1)
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

node* find2(node* head,int n1,int n2,vector<node*> &p1)
{
   if(head==NULL) 
      return NULL;
   
   if(head->val==n1)
   {
     p1.insert(p1.begin()+0,head); return head;
   }

   find2(head->left,n1,n2,p1,p2);
   find2(head->right,n1,n2,p1,p2);
   
   if(temp!=NULL || temp2!=NULL)
   {
     p1.insert(p1.begin()+0,head);
     return head;
  }
  return NULL;
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
  
   cout<<endl;
   vector<node*> p1;
   vector<node*> p2;
   int n1,n2;
   cin>>n1>>n2;
   cout<<n1<<" "<<n2;
   node* temp1=find(root,n1,p1);
   node* temp2=find(root,n2,p2);

   
   if(n1!=root->val){
     p1.insert(p1.begin()+0,root);
   }
   if(n2!=root->val){
   p2.insert(p2.begin()+0,root);
    }
  if(temp1!=NULL && temp2!=NULL)
   {  
     
      int i,j;
      int ns1=p1.size();
      int ns2=p2.size();

     for(i=0,j=0; i<ns1&&j<ns2 ; i++, j++)
     {   
          if(p1[i]->val!=p2[j]->val)
          {
             break;
          }
     }
     cout<<endl;
     cout<<"ancestor of "<<n1<<" "<<n2<<" : "<<p1[i-1]->val<<endl;

   }
  p1.clear();
  p2.clear();
  cin>>n1>>n2;
  find2(root,int n1,int n2,vector<node*>  &p1,vector<node*> &p2);





   return 0;
}
