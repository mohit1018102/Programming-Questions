#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	bool num=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++){
		 cout<<num; num=!num;
		 }
		cout<<endl;
	}
	
	return 0;
}
