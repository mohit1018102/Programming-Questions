#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string solution(int a[]);

int main()
{
	int count[10]={};
	int key;
	int i;
	for(i=0;i<12;i++)
	{ cin>>key;
	  getchar();
	  count[key]++;
	}
	 
	string s=solution(count);
	if(s=="0") cout<<"0";
	return 0;
}

string solution(int a[])
{
	int m1,m2,d1,d2,h1,h2;
	int i;
	//------------------------------------------
	if(a[1]!=0) {
		m1=1; a[1]--;
	}
	else
	if(a[0]!=0)
	{ m1=0; a[0]--;
	}
	else return "0";
	
	if(m1==1)
	{
		if(a[2]!=0) 
		{
		   m2=2; a[2]--;
		}
		else
		if(a[1]!=0) 
		{
		   m2=1; a[1]--;
		}
		else
		if(a[0]!=0) 
		{
		   m2=0; a[0]--;
		}
		else return "0";
		
	}
	else
	{
		for(i=9;i>=0;i--)
		{
			if(a[i]!=0){
				m2=i; a[i]--;break;
			}
		}
		if(i==-1) return"0";
	}
	//------------------------------------------------------------
	int mon=m1*10+m2;
	if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
	{
		if(a[3]!=0) {
		d1=3; a[3]--;
	    }
	    else
	    if(a[2]!=0)
	    { d1=2; a[2]--;
		}
		else
	    if(a[1]!=0)
	    { d1=1; a[1]--;
		}
		else return "0";
		
		if(d1==3)
		{
			if(a[1]!=0){ d2=1; a[1]--;
			}
			else
			  if(a[0]!=0){
			  	d2=0; a[0]--;
			  }
			  else return "0";
		}
		else
		{
			for(i=9;i>=0;i--)
			{ if(a[i]!=0){
			   d2=i; a[i]--; break;	
			   }
			}
			if(i==-1) return "0";
		}
	}
	else if(mon==2)
	{
		if(a[2]!=0)
	    { d1=2; a[2]--;
		}
		else
	    if(a[1]!=0)
	    { d1=1; a[1]--;
		}
		else return "0";
		
		if(d1==2)
		{
			for(i=8;i>=0;i--)
			{ if(a[i]!=0){
			   d2=i; a[i]--; break;	
			   }
			}
			if(i==-1) return "0";
		}
		else
		{
			for(i=9;i>=0;i--)
			{ if(a[i]!=0){
			   d2=i; a[i]--; break;	
			   }
			}
			if(i==-1) return "0";
		}
		
	}
	else
	{
		if(a[3]!=0) {
		d1=3; a[3]--;
	    }
	    else
	    if(a[2]!=0)
	    { d1=2; a[2]--;
		}
		else
	    if(a[1]!=0)
	    { d1=1; a[1]--;
		}
		
		else return "0";
		
		if(d1==3)
		{
			  if(a[0]!=0){
			  	d2=0; a[0]--;
			  }
			  else return "0";
		}
		else
		{
			for(i=9;i>=0;i--)
			{ if(a[i]!=0){
			   d2=i; a[i]--; break;	
			   }
			}
			if(i==-1) return "0";
		}
		
	}
	
	//----------------------------------------------
	if(a[2]!=0)
	{
		h1=2; a[2]--;
	}
	else
	 if(a[1]!=0)
	 { h1=1; a[1]--;
	 }
	 else
	   if(a[0]!=0)
	   {
	   	h1=0; a[0]--;
	   }
	   else return "0";
	   
	   if(h1==2){
	   
	   for(i=3;i>=0;i--)
		{ if(a[i]!=0){
			   h2=i; a[i]--; break;	
			   }
		}
			if(i==-1) return "0";
     }
     else
     { 
         for(i=9;i>=0;i--)
	   	{ if(a[i]!=0){
			   h2=i; a[i]--; break;	
			   }
		}
		if(i==-1) return "0";
     	
	 }
	 
	 //-----------------------------------------
	 int min1,min2;
	 for(i=5;i>=0;i--)
	 {
	 	if(a[i]!=0){
			   min1=i; a[i]--; break;	
			   }
	 }
	 if(i==-1) return "0";
	 
	 for(i=9;i>=0;i--)
	 {
	 	if(a[i]!=0){
			   min2=i; a[i]--; break;	
			   }
	 }
	 if(i==-1) return "0";
	 int day=d1*10+d2;
	 int hx=h1*10+h2;
	 int min=min1*10+min2;
	 
	 if(mon<10) cout<<"0"<<mon;
	 else
	  cout<<mon;
	cout<<"/";
	if(day<10) cout<<"0"<<day;
	 else
	  cout<<day;
	cout<<" ";
	if(hx<10) cout<<"0"<<hx;
	 else
	  cout<<hx;
	cout<<":";
	 if(min<10) cout<<"0"<<min;
	 else
	  cout<<min;
	  
	  return " ";
}
