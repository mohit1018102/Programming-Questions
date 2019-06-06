#include<iostream>
using namespace std;
int main()
{
	char f='A';
	char s='Z';
	for(int i=0;i<10;i++)
	{
		cout<<f<<s<<" ";
		f=f+2;
		s=s-1;
	}
	return 0;
}
