#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int n=2*x+1;
	int i,j;
	int num=1;
	for(i=0;i<n;i++)
	{ 
	    for(j=0;j<n;j++)
	    {
	    	if(i==n-1)
	    	{
	    		if(j==0||j==n-1) cout<<"N";
	    		else 
	    		 cout<<" ";
			}
			else
			 if(i<n/2)
			 {
			 	if(j==0||j==n-1||(i!=0&&j==num-1)) cout<<num;
			 	else
			 	cout<<" ";
			 }
			 else
			 { if(j==0||j==n-1||j==num-1) cout<<"*";
			   else
			   cout<<" ";
			 }
		}
		num++;
		cout<<endl;
	}
	return 0;
}
