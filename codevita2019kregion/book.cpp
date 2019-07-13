#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;

int coin(unsigned long long  n)
{
	unsigned long long sol[n+1];
	sol[0]=1;
	sol[1]=0;
	sol[2]=1;
	for(int i=3;i<n+1;i++)
	{   unsigned long long x=((sol[i-1]%mod)+(sol[i-2]%mod))%mod;
		sol[i]=(((i-1)%mod)*(x%mod))%mod;
	}
	return sol[n];
}

int main()
{ unsigned long long n;
  cin>>n;
  cout<<coin(n);
	
}

