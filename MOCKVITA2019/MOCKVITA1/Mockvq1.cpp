#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void solve(string in,string out);
int main()
{
	 string in,out="";
	 cin>>in;
	 char dir;
	 int t;
	 int mov;
	 int moved=0;
	 int len=in.length();
	 cout<<len<<endl;
	 cin>>t;
	 
	 while(t--)
	 {
	 	cin>>dir>>mov;
	 	if(dir=='L') 
	 	{ moved=(moved+mov)%in.length();
	 	  out=out+in[moved];
		   	
		}
		else
		{
			moved=(moved-mov)%in.length();
			out=out+in[moved];
		}
	 }
	 
	 solve(in,out);
	 return 0;
}

void solve(string in,string out)
{   int i;
	string temp=in;
	cout<<out<<endl;
	do{
		i=in.find(out);
		if(i!=string::npos)
		{
			cout<<"YES";
			return;
		}
		next_permutation(out.begin(),out.end());
		cout<<out<<endl;
	}while(temp!=out);
	cout<<"NO";
	return;
}

