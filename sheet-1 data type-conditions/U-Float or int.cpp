#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,result;
    cin>>n;
    result=n-(int)n;
    if(result!=0.000)
    {
    cout<<"float "<<(int)n<<" "<<showpoint<<fixed<<setprecision(3)<<result;
    }
    else 
    cout<<"int "<<(int)n;
}