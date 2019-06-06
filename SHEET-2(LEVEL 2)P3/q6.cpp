#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int i,j;
	int n1=1,n2=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{   if(i==n-1)
		    { cout<<n1--;
			}
			else
			if(j==0) cout<<n1;
			else
			if(j==n-1) cout<<n2;
			else
			 cout<<" ";
			
		}
		n1++;
		n2--;
		cout<<endl;
		
	}
	n1=n-1; n2=2;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{   if(i==n-1)
		    { cout<<n1--;
			}
			else
			if(j==0) cout<<n1;
			else
			if(j==n-1) cout<<n2;
			else
			 cout<<" ";
			
		}
		n1--;
		n2++;
		cout<<endl;
		
	}
	
	return 0;
}
