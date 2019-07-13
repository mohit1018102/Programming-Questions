#include<iostream>
#include<cmath>
using namespace std;
bool
void sieve(){


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
 
 
}
