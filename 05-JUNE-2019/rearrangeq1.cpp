#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
	int n;
	cin>>n;
	int i;
	int key;
	for(i=0;i<n;i++)
	{
		cin>>key;
		a.push_back(key);
	}
	
	vector<int> b(a);
	
	int mid=n-(n/2);
	
	a.clear();
	int k=0;
	for(i=1;i<n;i+=2)
	{   
		a.push_back(b[mid+k]);
		k++;
	}
	
	 k=1;
	for(i=0;i<n;i+=2)
	{
		a.insert(a.begin()+i,b[mid-k]);
		k++;
	}
	
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
	
}
