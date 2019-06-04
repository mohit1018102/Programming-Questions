#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	int num=1,sign=1;
	for(i=0;i<n;i++)
	{  if(i%2==0) sign=1;
	    else sign=-1;
		for(j=0;j<=i;j++) {
		   cout<<sign*num; 
		   sign=-1*sign;
		   num=num+1;
		}
		
		cout<<endl;
	}
	
	return 0;
}
