#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],b[n]={};
	int s=0;
	
	int i,j,k;
	
	for(i=0;i<n;i++) cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=0;k<s;k++)
				{ if(a[i]==b[k]) break;
				}
				if(k==s) 
				{
					b[s]=a[i];
					s++;
				}
				break;
			}
		}
	}
	
	for(i=0;i<s;i++) cout<<b[i]<<" ";
	return 0;
	
}
