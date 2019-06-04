#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	int start=1,diff=2,value=1;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{ 
		  for(j=0 ;j<=i ;j++) {
		  cout<<value; value++;
		  }
		}
		else
		{ value=start;
		  for(j=0;j<=i;j++)
		  {
		  	cout<<value; value--;
		  }
			
		}
		cout<<endl;
		
		start=start+diff;
		value=start-diff+1;
		diff++;
		
	}
	
	return 0;
}
