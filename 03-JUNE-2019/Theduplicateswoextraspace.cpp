#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int s=0;
	
	int i,j,k;
	
	for(i=0;i<n;i++) cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=0;k<i;k++)
				{ if(a[i]==a[k]) break;
				}
				
				if(k==i) 
				{
					cout<<a[i]<<" ";
				}
				break;
			}
		}
	}
	

	return 0;
	
}
