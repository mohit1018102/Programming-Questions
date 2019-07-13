#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v(6,0);
	for(int i=0;i<6;i++)
	{
		cin>>v[i];
	}
	reverse(v.begin(),v.begin()+3);
	for(int i=0;i<3;i++)
	cout<<v[i]<<" ";
	reverse(v.begin()+3,v.end());
	reverse(v.begin(),v.end());
	for(int i=0;i<6;i++)
	cout<<v[i]<<" ";
}
