#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,r;
    cin>>a>>b>>c>>d;
    r=(a%100)*(b%100)*(c%100)*(d%100);

    if((r%100)<10)
    cout<<"0"<<r%100;
    else
    cout<<r%100;
}