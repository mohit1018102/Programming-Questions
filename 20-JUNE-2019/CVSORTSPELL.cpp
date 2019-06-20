#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string single[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
string doub[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string doub2[]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
string three[]={"hundred","thousand"};

void sortInteger(int &a,int &b)
{  if(a>b){
	int temp=a;
	a=b;
	b=temp;
   }
}

void sortString(string &str1,string &str2)
{  string temp;
    
	if(str1.compare(str2)>0)
	{ temp=str1;
	  str1=str2;
	  str2=temp;
	}
	
}

string single1(string str)
{
	return single[str[0]-'0'];
}

string doub1(string str)
{    string temp;
     stringstream s;
     if(str=="00") return "";
     if(str[0]=='0' &&str[1]!='0')
     {  return single[str[1]-'0'];
	 }
	 else
	 if(str[0]=='1')
     {
     	return doub[str[1]-'0'];
	 }
	 else
	 {  temp=doub2[str[0]-'0'];
	    
	    if(str[1]!='0')
	    { temp.append(" ");
	      s<<str[1];
		  temp.append(single1(s.str()));
		}
		return temp;
	 }
	
}

string hun(string str)
{   stringstream s;
    if(str=="000") return "";
    else
       if(str[0]=='0' && str[1]!='0') 
       { s<<str[1]; s<<str[2];
         return doub1(s.str());
	   }
	else
    {
	
	string temp;
	temp=single[str[0]-'0'];
	temp.append(" ");
	temp.append(three[0]);
	s<<str[1];
	s<<str[2];
	temp.append(" ");
	temp.append(doub1(s.str()));
	return temp;
  }
}
string tho(string str)
{  
	stringstream s;
	string temp;
	temp=single[str[0]-'0'];
	temp.append(" ");
	temp.append(three[1]);
	temp.append(" ");
	s<<str[1];
	s<<str[2];
	s<<str[3];
	temp.append(hun(s.str()));
	return temp;
	
}

string five(string str)
{  
        string temp;
	    stringstream s;
	    if(str[0]=='1')
        {
     	  temp=doub[str[1]-'0'];
	    }
	   else
	   { temp=doub2[str[0]-'0'];
	     if(str[1]!='0')
	     { temp.append(" ");
		  temp.append(single[str[0]-'0']);
		 }
	    }
		temp.append(" ");
		temp.append(three[1]);
		temp.append(" ");
		s<<str[2];
	    s<<str[3];
	    s<<str[4];
	    temp.append(hun(s.str()));
	    return temp;
		
}

string conversion(int a)
{  stringstream in;
   in<<a;
   
   string str=in.str();
   
  int len=str.length();
  
  if(len==1)
  {
  	    return single1(str);
  }
  if(len==2)
  { return doub1(str);
  }
  if(len==3)
  {
  	return hun(str);
  }
  if(len==4)
  {
  	return tho(str);
  }
  if(len==5)
  {return five(str);
  }
  return "";
}
int main()
{
	 int a,b;
	 cin>>a>>b;
	 string spella,spellb,sorta,sortb;
	 bool flag=false;
	 while(a!=b)
	 {
	 
	    sortInteger(a,b);
	    sorta=spella=conversion(a);
	    sortb=spellb=conversion(b);
	   
	    sortString(sorta,sortb);
	    if(sorta!=spella)
	    { int x=a+b;
	      int y=b+a;
	      a=x; b=y;
		}
		else
		{
		a=a+a;
		b=b+b;
	    }
	    
	    if(a>99999 || b>99999) 
	    { flag=true;
		}
	
	 }
	 
	 if(!flag)
	    cout<<a;
	 else
	   cout<<"outofrange";
	 return 0;
}
