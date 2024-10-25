#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    double c;  //if a=10, b=3 then a/b=10/3=3.33...[here a,b integer and a/b float or double]
    cin>>a>>b;
    c=(double) a/b;   //type casting [search: google]
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor (c)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil (c)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(c)<<endl;

}
