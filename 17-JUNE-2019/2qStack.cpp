
#include<iostream>
#include<queue>
using namespace std;

void push(queue<int> &q1,int key)
{
    q1.push(key);
}

void pop(queue<int> &q1,queue<int> &q2)
{
    if(q1.empty()) cout<<"queue is empty";
    else
      {  int temp;
         int n=q1.size();
          for(int i=1;i<=n-1;i++)
          {
              temp=q1.front(); q1.pop();
              q2.push(temp);
              
         }
          temp=q1.front();
             
           q1.pop();
           cout<<"popped element "<<temp<<endl;
       }
    swap(q1,q2);
}



void display(queue<int> q1)
{   int data;
    cout<<"\n-------------------------\n";
    while(!q1.empty())
    { data = q1.front(); q1.pop();
      cout<<data<<" ";
    }
    
    cout<<"\n--------------------------\n"<<endl;
}
        

int main()
{
  queue<int> q1;
  queue<int> q2;
  int key;
  int choice;
  do{
     cin>>choice;
     // 1.push 2.pop 3.display;
      switch(choice)
      {
         case 1: cin>>key; 
                 push(q1,key);
                 break;
         case 2 : pop(q1,q2);
                  break;
         case 3 : display(q1);
                  break;
      }
  }while(choice!=4);
  cout<<"data in queue : ";
  display(q1);
  return 0;
}
        
 

    
       
