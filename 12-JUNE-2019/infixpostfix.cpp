#include<bits/stdc++.h>
using namespace std;
void infixToPostfix(string str);
char atTop(stack<char> stk)
{
   if(stk.empty()) return ' ';
   else
       return stk.top();
}
void display(stack<char> a)
{
    while(!a.empty())
    {
       cout<<a.top()<<endl;
       a.pop();
     }
     cout<<"---------------"<<endl;
}

int precedence(char a)
{
   switch(a)
   {
      case '+': return 1;
      case '-': return 1;
      case '*': return 2;
      case '/': return 2;
   }
   return 0;
} 

int main()
{
   string str;
   cin>>str;
   
   infixToPostfix(str);
   
   return 0;
}

void infixToPostfix(string str)
{
   int n=str.length();
   stack<char> stk;
   int top,prec;
   int i;
   for(i=0;i<n;i++)
   {
       if(str[i]>='a' && str[i]<='z')
       {
            cout<<str[i]<<" ";
       }
       else
       {
          
          if(stk.empty()) 
          {stk.push(str[i]);
          }
          else 
          { top=precedence(atTop(stk));
            prec=precedence(str[i]);
            if(prec>top) 
            {stk.push(str[i]);
            }
            else
            {
               while(prec<=top)
               {
                  cout<<stk.top()<<" ";
                  stk.pop();
                  top=precedence(atTop(stk));
               }
               stk.push(str[i]);
            }
         }
      }
     // if(!stk.empty())
      //display(stk);
   }
   
   while(!stk.empty())
   {
     cout<<stk.top()<<" "; stk.pop();
   }
   
}
          
          






