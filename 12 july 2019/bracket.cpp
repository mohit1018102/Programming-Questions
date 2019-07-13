#include<bits/stdc++.h>
using namespace std;

string bracket(string s,int n,int &c)
{   bool flag=false;
    stack<char> stk;
    stack<int> count;
    int start=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='('||s[i]=='{'||s[i]=='[')
		{  stk.push(s[i]);
		   count.push(0);
		   start++;
		}
		else
		  if(s[i]==')'||s[i]=='}'||s[i]==']')
		  {
		  	 if(stk.empty())
		  	 {
		  		 flag=true;
			 }
			 else 
			 {  
			 	while(!stk.empty() && stk.top()!='(' && stk.top()!='{' && stk.top()!='[')
			 	{
			 	   stk.pop();	
				}
				if(!stk.empty())
				{
				 stk.pop();	
				 start--;
				 int x=count.top();
				 count.pop();
				 if(x<=2) c++;
				 else
				     flag=true;
				}
				else
				   flag=true;
			 }
		  }
		  else
		     if(start>0 && s[i]=='*')
		     {
		     	int x=count.top();
		     	count.pop();
		     	count.push(x+1);
			 }
	}
	if(flag) return "No";
	
	if(start>0) return "NO";
	return "Yes";
}
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int c=0;
	string answer=bracket(s,n,c);
	cout<<answer<<" "<<c;
}
