#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x;
	int rev=0;
	while(n>0)
	{
		rev*=10;
		rev=rev+n%10;
		n=n/10;
	}
	n=rev;
	while(n>0)
	{ x=n%10;
	  switch(x)
	  { case 0: cout<<"Zero "; break;
	  	case 1: cout<<"One "; break;
	  	case 2: cout<<"Two "; break;
	  	case 3: cout<<"Three "; break;
	  	case 4: cout<<"Four "; break;
	  	case 5: cout<<"Five "; break;
	  	case 6: cout<<"Six "; break;
	  	case 7: cout<<"Seven "; break;
	  	case 8: cout<<"Eight "; break;
	  	case 9: cout<<"Nine "; break; 
	  }
	  n=n/10;
		
	}
	return 0;
}
