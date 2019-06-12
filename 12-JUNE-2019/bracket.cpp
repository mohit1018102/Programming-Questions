#include<bits/stdc++.h>
using namespace std;
string par(string str);
int main()
{ int t;
  cin>>t;
  string s;
  while(t--){
  cin>>s;
  cout<<par(s)<<endl;
  }
  return 0;
}

string par(string str)
{
  stack<char> stk;
  
  int n=str.length();
  
  for(int i=0;i<n;i++)
  {
     if(str[i]=='(') stk.push('(');
     else
      if(str[i]==')')
      {
          if(!stk.empty())
          {
             stk.pop();
           }
           else
           {
              return "NO";
            }
        }
     }
     
     if(stk.empty()) return "YES";
     else
       return "NO";
}
     
        


