#include<iostream>
using namespace std;
int main()
{
	 int n;
	 int t;
	 cin>>t;
	
	 int n3,n5;
	while(t--){
	    cin>>n;
	    n3=0;n5=0;
    	for(int i=0;i<n;i++)
	   {   if((n-i)%3==0 && i%5==0)
	      {
	  	    n3=n-i;
	  	    n5=i;
	  	    break;
	      }
	   }
	
	for(int i=0;i<n3;i++) cout<<"5";
	for(int i=0;i<n5;i++) cout<<"3";
	cout<<endl;
   }
	return 0;
	
}
