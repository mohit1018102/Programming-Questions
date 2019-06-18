#include<iostream>
#include<stack>
using namespace std;

void dequeue(stack<int> &s1,stack<int> &s2)
{    int key;
     while(!s1.empty())
     {
        key=s1.top();
        s2.push(key);
        s1.pop();
     }
     cout<<"popped element : "<<s2.top()<<endl;
     s2.pop();

    while(!s2.empty())
     {
        key=s2.top();
        s1.push(key);
        s2.pop();
     }

}

void display(stack<int> s1)
{
   while(!s1.empty())
   {
      cout<<s1.top()<<" ";
      s1.pop();
   }
   cout<<endl;
}
     
     
int main()
{
  stack<int> s1;
  stack<int> s2;
  int choice,key;
  do{
      cin>>choice;
      switch(choice)
      {
        case 1: cin>>key;
                s1.push(key);
                break;
        case 2: dequeue(s1,s2);
                break;
        case 3: display(s1);
                break;
       }
   
   }while(choice!=4);

return 0;
}


