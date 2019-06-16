#include<bits/stdc++.h>
using namespace std;
int factors(int n)
{   
    int count;
	int i;
	int l=n/2;
	count=0;
	for(i=1;i<=l;i++)
	{ if(n%i==0) count++;
	}
	count++;
	return count;
}
int solution(int n)
{
	int arr[n+1]={};
	arr[1]=1;
	arr[2]=1;
    int i;
    for(i=3;i<=n;i++)
    {
    	arr[i]=(i-1)*arr[i-1]+(i-2)*arr[i-2];
	}
	return arr[n];

}

int main()
{
	long t,n;
	
	cin>>t;
	long long fact;
	while(t--)
	{ int factor;
	  cin>>n;
	  factor=factors(n);
	  cout<<solution(factor)<<endl;
	}
	return 0;
}
