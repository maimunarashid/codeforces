#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,x,y;
   cin>>a>>b>>c;
   x=max(max(a,b),c); 
   y=min(min(a,b),c);
   cout<<y<<" "<<x;
}