#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,result;
    cin>>n;
    result=((n*(n+1))/2); //if n=3 then 1+2+3=6 ; if n=10 then 1+2+3+....+10=55 
    cout<<result;   //after applying formula for n=3; ((3*(3+1))/2)=6
}