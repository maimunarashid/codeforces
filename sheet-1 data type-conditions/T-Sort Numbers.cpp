#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,x,y,z,temp;
   cin>>a>>b>>c;
   x=a;
   y=b;
   z=c;
   
   if(a>b)
   {
    temp=a;
    a=b;
    b=temp;
    }

   if(a>c)
   {
    temp=a;
    a=c;
    c=temp;
    }

   if(b>c)
   {
    temp=b;
    b=c;
    c=temp;
    }
   cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
   cout<<endl;
   cout<<x<<"\n"<<y<<"\n"<<z<<"\n"; 
}