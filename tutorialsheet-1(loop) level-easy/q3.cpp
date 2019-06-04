#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string num;
	cin.ignore();
	while(t--)
	{ getline(cin,num);
	  cout<<num.length()<<endl;
	}
	return 0;
}
