#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long int maximum=a[1];
    for(int i=1;i<=n;i++)
    {
        if(a[i]>maximum)
        maximum=a[i];
    }
    cout<<maximum;
}