#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> stk;
	
	int i=0;
	for(i=0;i<10;i++)
	{
		stk.push(i);
	}
	cout<<stk.top()<<endl;
	for(i=0;!stk.empty();i++)
	{
		cout<<stk.top();
		stk.pop();
	}
	return 0;
}
