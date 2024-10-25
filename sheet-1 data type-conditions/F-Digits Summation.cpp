#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,r1,r2,sum;  //10^18 data type: long long int
    cin>>a>>b;
    r1=a%10;    //reminder of a/10
    r2=b%10;   //reminder of b/10
    sum=r1+r2;
    cout<<sum;
}