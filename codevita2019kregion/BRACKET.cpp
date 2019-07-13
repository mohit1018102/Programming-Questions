#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string bracketx(string s,int n,int &pairs)
{   stack<char> stk;
     stack<int> count;
     bool flag=false;
	for(int i=0;i<n;i++)
	{
		 if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		 {
		 	stk.push(s[i]);
		 	count.push(0);
		 	cout<<"push"<<endl;
		 }
		 else if(s[i]=='*')
		 	  {
		 		stk.push(s[i]);
		 		if(!count.empty())
				{
				 int x=count.top();
		 		 count.pop();
		 		 count.push(x+1);
		 		 cout<<"inc"<<endl;
		 	    }
		 	    else
		 	      flag=true;
			  }
			  else if(s[i]==')' || s[i]==']' ||s[i]=='}')
			  { 
			  	 while(!stk.empty() && stk.top()!='(' && stk.top()!='{' && stk.top()!='[')
			  	 { stk.pop();
			  	  cout<<"pop"<<endl;
			     }
			      if(!stk.empty())
			      {
				     stk.pop();
			         if(count.top()>=2)
			        {
				     pairs++;
			        }
			       else
			       {
			      	flag=true;
				   }
				  cout<<count.top();
				  count.pop();
			    }
			    else
			     flag=true;
			      
			  }
			  //cout<<"hello";
	}
	if (flag) return "NO";
	
	if(stk.empty()) return "YES";
	return "NO";
}

int main()
{
	string s;
	cin>>s;
	int pairs=0;
	string ans= bracketx(s,s.length(),pairs);
	
	cout<<ans<<" "<<pairs;
	return 0;
}
