#include<bits/stdc++.h>
using namespace std;
int mohit() // signature function
{
	return 'm'+'o'+'h'+'i'+'t';
}
int calculate(int n)
{   mohit();
	int ans=log2(n)+1;
	return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{   mohit();
		int n;
		cin>>n;
		cout<<calculate(n)<<endl;
		
	}
	return 0;
}


