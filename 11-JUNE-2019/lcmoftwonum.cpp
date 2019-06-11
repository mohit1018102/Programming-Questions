#include<iostream>
#include "gcd.h"
using namespace std;
int main()
{
	 int a;
	 int b;
	 cin>>a>>b;

	 cout<<((a*b)/gcd(a,b))<<endl;
	 return 0;
}
