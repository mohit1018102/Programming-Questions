#include<iostream>
using namespace std;

void permutation(string s,int n,int i)
{
	if(i==n-1)
	{
		cout<<s<<" ";
		return;
	}
	
	for(int j=0;j<n;j++)
	{
		swap(s[i],s[j]);
		permutation(s,n,i+1);
		swap(s[i],s[j]);
	}
}


int main()
{   string s;
	cin>>s;
	permutation(s,s.length(),0);
}
