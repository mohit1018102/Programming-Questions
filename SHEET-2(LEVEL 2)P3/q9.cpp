#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num=n,change;
	
	int i,j,value;
	vector<int> v;
	for(i=0;i<n;i++)
	{   value=num; change=i+1;
		
		for(j=0;j<n;j++)
		{
			if(change>0)
			{
				cout<<value;
				v.insert(v.begin()+0,value);
				change--;
			}
			else
			{ value--;
			  cout<<value;
			  v.insert(v.begin()+0,value);
			}
		}
		
		for(j=1;j<n;j++)
		{ cout<<v[j];
		}
		
		v.clear();
		num--;
		cout<<endl;
	}
	num=2;
	for(i=n-2;i>=0;i--)
	{   value=num; change=i+1;
		
		for(j=0;j<n;j++)
		{
			if(change>0)
			{
				cout<<value;
				v.insert(v.begin()+0,value);
				change--;
			}
			else
			{ value--;
			  cout<<value;
			  v.insert(v.begin()+0,value);
			}
		}
		
		for(j=1;j<n;j++)
		{ cout<<v[j];
		}
		
		v.clear();
		num++;
		cout<<endl;
	}
}
