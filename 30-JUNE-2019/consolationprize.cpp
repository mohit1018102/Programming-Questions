#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
	if(a>=b) return true;
	return false;
}
int main()
{   
    int n;
	cin>>n;
	vector<int> arr,ans;
	
	for(int i=0;i<n;i++)
	{   int key;
		cin>>key;
		arr.push_back(key);
	}
	
	sort(arr.begin(),arr.end(),comp);
	int r=1;
	int ch=1;
	ans.push_back(r);
	for(int i=1;i<n;i++)
	{   ch++;
		if(arr[i]==arr[i-1])
		{
			ans.push_back(r);
		}
		else
		{
			r=ch;
			ans.push_back(r);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
	
	
}
