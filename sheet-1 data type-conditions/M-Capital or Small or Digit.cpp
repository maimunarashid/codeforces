#include<bits/stdc++.h>
using namespace std;
int main()
{
   char ch;
   cin>>ch;
   if(ch>='A' && ch<='Z') 
   cout<<"ALPHA\nIS CAPITAL";

   else if(ch>='a' && ch<='z') 
   cout<<"ALPHA\nIS SMALL";
   else 
   cout<<"IS DIGIT";
}