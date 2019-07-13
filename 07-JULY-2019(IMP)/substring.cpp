#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
vector<string> generateallstr(string s,int n)
{
	vector<string> ans;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			ans.push_back(s.substr(i,j-i+1));
		}
	}
	return ans;
}

vector<string> generateunique(string s,int n)
{   set<string> ex;
	vector<string> ans;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			ex.insert(s.substr(i,j-i+1));
		}
	}
	set<string>::iterator it;
	for(it=ex.begin();it!=ex.end();it++)
	{
		ans.push_back(*it);
	}
	return ans;
}
int main()
{
	string s;
	cin>>s;
	vector<string> ans=generateallstr(s,s.length());
	int n=ans.size();
	
	for(int i=0;i<n;i++)
	cout<<ans[i]<<" ";
	cout<<"\n-------------------\n";
	cout<<"unique strings"<<endl;
	
	ans=generateunique(s,s.length());
	for(int i=0;i<ans.size();i++)
	cout<<ans[i]<<" ";
	
	return 0;
}
