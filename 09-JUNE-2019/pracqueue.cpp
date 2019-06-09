#include<iostream>
#include<queue>
using namespace std;
int main()
{
	 queue<int> que;
	 int i=0;
	 for(i=0;i<10;i++)
	 {  
	 	que.push(i);
	 	cout<<que.back();
	 }
	 
	 
	 for(i=0;i<10;i++) 
	 {
	 	cout<<que.front();
	 	que.pop();
	 }
	 return 0;
}
