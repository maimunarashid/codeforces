#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,years,months,days,r;
    cin>>n;
    if(n<365)
    {
        cout<<"0 years\n";
        months=n/30;
        cout<<months<<" months\n";
        days=n%30;
        cout<<days<<" days";
    }
    else if(n==365)
    {
       cout<<"1 years\n";
       cout<<"0 months\n";
       cout<<"0 days"; 
    }
    
    else if(n<30)
    {
        cout<<"0 years\n";
        cout<<"0 months\n";
        cout<<n<<" days";
    }
    

    else if (n==30)
    {
        cout<<"0 years\n";
        cout<<"1 months\n";
        cout<<"0 days";
    }
    

    else if(n>365)
    {
        years=n/365;
        cout<<years<<" years\n";
        int r=n%365;
        if(r<30)
        {
           cout<<"0 months\n"; 
           cout<<r<<" days";
        }
    
    else if (r==30)
    {
           cout<<"1 months\n";
           cout<<"0 days";
    }
    
    else if(r>30)
    {
        months=r/30;
        cout<<months<<" months\n";
        days=r%30;
        cout<<days<<" days";
    }


    }
}