#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,c;
	cin>>a>>b>>c;
	unsigned int res;
	int r,cal,d,i;
	if(b/a==c/b)
	{   r=b/a;
	    cal=a;
	    for( i=0;i<n;i++)
	    { 
	    	cout<<cal<<" ";
	    	cal=cal*r;
		}
		cout<<endl;
		res=a*(pow(r,n)-1)/(r-1);
		cout<<res;
	}
	else
	 if((b-a)==(c-b))
	 { d=b-a;
	   cal=a;
	   for(i=0;i<n;i++)
	   {
	   	  cout<<cal<<" ";
	   	  cal+=d;
	   }
	   res=(n/2.0)*(2*a+(n-1)*d);
	   cout<<endl;
	   cout<<res; 
	 	
	 }
	return 0;
}
