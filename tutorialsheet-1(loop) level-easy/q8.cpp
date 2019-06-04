#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b; //a^b
	cin>>a>>b;
	int ans=1;
	int i;
	for(i=0;i<b;i++) ans*=a;
	cout<<ans;
	return 0;
}
