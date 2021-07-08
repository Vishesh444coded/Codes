#include <iostream>
#include <string>           
using namespace std;

int main() {
	// your code goes here
	string a,b,c;
	c = "+1";
   // int len = strlen(c);
   size_t pos = c.find('i');
  // cout<<"pos: "<<pos;
   int len  = c.length();
   int count=0,Sloc=0;
   for(int i=0;i<len;i++)
   {
       if(c[i]=='+'||c[i]=='-')
       {   Sloc = i;
           count++;
       }
   }
   //cout<<count<<endl<<Sloc<<endl;
   if(pos<len) { 
       if(pos==0)
       {
           a = "0";
           b = "1";
       }
       else if(count==0)
       {
           a="0";
           b = c.substr(0,len-1);
       }
       else
       {   if(Sloc==0)
           { a = "0"; b = c.substr(Sloc,len-1); }
       else
       {
           a = c.substr(0,Sloc);
           b = c.substr(Sloc,len-1-Sloc);
       }
       }
       
   }
   else
   { 
       a = c;
       b = "0";
   }
   
   if(b=="+") b = "1";
   else if(b=="-")b = "-1";
	
	cout<<a<<" "<<b<<endl;
 	int d = stoi(a);
 	int e = stoi(b);
	//int k = +1;
	cout<<"Real Part: "<<d<<endl ;
	cout<<"Imaginary Part: "<<e ;
	return 0;
}
/* 1+3i, +1+3i, -1-3i, 1, 1i, +1, 1+i  */
