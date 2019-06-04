#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	int start=1,diff=2,value;
	for(i=0;i<n;i++)
	{
		
		  value=start;
		  for(j=0;j<=i;j++)
		  {
		  	cout<<value; value--;
		  }
			
		
		cout<<endl;
		
		start=start+diff;
		diff++;
		
	}
	
	return 0;
}
