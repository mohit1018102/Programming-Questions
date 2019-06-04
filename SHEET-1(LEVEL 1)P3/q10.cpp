#include<iostream>
using namespace std;

int main()
{
	  int n;
	  cin>>n;
	  int i,j;
	  
	  for(i=0;i<n;i++)
	  {  
	    for(j=0;j<n-i-1;j++) cout<<" "; 
	    
	  	for(j=0;j<=i;j++)
	  	{
	  		 cout<<"*";
	  	
		}
		for(j=0;j<i;j++)
		{
			 cout<<"*";
			
		}
	  	
	  	 cout<<endl;
	  }
	  
	  for(i=n-2;i>=0;i--)
	  {  
	    for(j=0;j<n-i-1;j++) cout<<" "; 
	    
	  	for(j=0;j<=i;j++)
	  	{
	  		 cout<<"*";
	  		
		}
		for(j=0;j<i;j++)
		{
			 cout<<"*";
			
		}
	  	
	  	 cout<<endl;
	  }
	  return 0;
}
