#include<iostream>
using namespace std;
void subsequence(string s,int n,int index=-1,string curr="")
{
	cout<<curr<<" ";
	
	for(int i=index+1;i<n;i++)
	{
		curr+=s[i];
		subsequence(s,n,i,curr);
		curr.erase(curr.size()-1);
	}
	return ;
}

int main()
{
  string s;
  cin>>s;
  subsequence(s,s.length());
  return 0;
  
}
