#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n;
 cin>>n;
 bool prime[n+1]={false};
 int x=sqrt(n);
 for(int i=2;i<=n;i++)
 {
 	if(!prime[i])
 	{
 		for(int j=2;i*j<=n+1;j++)
 		{
 			prime[i*j]=true;
		}
	 }
 }
 
 for(int i=2;i<n+1;i++)
 {
 	if(!prime[i]) cout<<i<<" ";
 }
 return 0;
}
