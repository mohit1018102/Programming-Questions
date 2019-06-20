#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkall(bool w[6])
{
	int i;
	for(i=0;i<6;i++)
	if(w[i]==false) return false;
	
	return true;
}
void reset(bool w[6])
{ int i=0;
  for(i=0;i<6;i++) w[i]=false;
	
}
int main()
{
	string s;
	
	getline(cin,s);
	
	stringstream str(s+" ");
	
	bool work[6]={false};
	int count=0;
	string word;
	int flag=-1;
	while(str>>word)
	{  
	   flag=-1;
		if(word=="RA")
		{   if(work[0]) flag=0;
			work[0]=true;
			
		}
		else
		  if(word=="DES")
		{   if(work[1]) flag=1;
			work[1]=true;
		}
		else
		if(word=="CODE")
		{ if(work[2]) flag=2;
			work[2]=true;
		}
		else
		if(word=="TEST")
		{ if(work[3]) flag=3;
			work[3]=true;
		}
		else
		if(word=="DEP")
		{ if(work[4]) flag=4;
			work[4]=true;
		}
		else
		if(word=="M")
		{ if(work[5]) flag=5;
			work[5]=true;
		}
		
		if(flag>-1)
		{
			if(checkall(work)) count++;
			work[flag]=true;
			reset(work);
		}
		
	}
	if(checkall(work)) count++;
	cout<<count;
}
