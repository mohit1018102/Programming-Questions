#include<bits/stdc++.h>

using namespace std;
int convert(char c)
{
	switch(c)
	{   case '0':return 0;
		case '1':return 1;
		case '2':return 2;
		case '3':return 3;
		case '4':return 4;
		case '5':return 5;
		case '6':return 6;
		case '7':return 7;
		case '8':return 8;
		case '9':return 9;		
	}
	return 0;
}

int solve(string in,string out,int n)
{
	int move[n]={0};
	int s1[n],s2[n];
	for(int i=0;i<n;i++)
	{
		s1[i]=convert(in[i]);
		s2[i]=convert(out[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		int d=0;
		int a=s1[i];
		int b=s2[i];
		while(a!=b)
		{ if(a==0) a=9;
		  else a=a-1;
		  d++;
		}
		int u=0;
		int x=s1[i];
		int y=s2[i];
		while(x!=y)
		{ x=(x+1)%10;
		  u++;
		}
		if(u==0) move[i]=0;
		else if(d>u) {
		   move[i]=u; 
	    }
		else{
		move[i]=-d; 
		}
	}
	
	for(int i=0;i<n;i++)
   { cout<<move[i]<<" ";
   }
  cout<<endl;
	
	int up=0,down=0;
	for(int i=0;i<n;i++)
	{ 
		if(move[i]>0 && move[i]>up) up=move[i];
		if(move[i]<0 && down>move[i]) down=move[i];
	}
	return up-down;

}
int main()
{
	string str;
	cin>>str;
	string in="",out="";
	int i=0;
	for(i=0;str[i]!='#';i++)
	{
		in+=str[i];
	}
	int n=str.length();
	for(i=i+1;i<n;i++)
	{
		out+=str[i];
	}
	
	
    cout<<solve(in,out,in.length());

	
}
