#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node 
{
   bool isWord;
   struct node* next[26];
}node;

node* newnode()
{
    node *temp=(node*)malloc(sizeof(node));
    temp->isWord=false;
    for(int i=0;i<26;i++)
    {
       temp->next[i]=NULL;
    }
    return temp;
}

void insert(node* head,string s)
{
    int n=s.length();
    node* temp=head;
    for(int i=0;i<n;i++)
    { 
          if(temp->next[s[i]-'a']!=NULL)
          {
               temp=temp->next[s[i]-'a'];
          }
          else
          {
                 temp->next[s[i]-'a']=newnode();
                 temp=temp->next[s[i]-'a'];
          }
    }
   temp->isWord=true;
}

bool search(node* head,string s)
{
    node* temp=head;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(temp->next[s[i]-'a']==NULL) return false;
        else
          {
                   temp=temp->next[s[i]-'a'];
          }
     }

   return temp->isWord;
} 


int main()
{ 
     node* head;
     head=newnode();
     int t;
     cin>>t;
     string s;
     while(t--)
     {
         cin>>s;
         insert(head,s);
      }


     cin>>t;
     while(t--)
     { cin>>s;
       if(search(head,s)) cout<<"string is found"<<endl;
       else
             cout<<"string is not found"<<endl;
     }

  return 0;
}
  

 
  
   
