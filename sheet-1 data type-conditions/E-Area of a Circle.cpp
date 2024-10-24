/*  
#include<iostream>
#include<iomanip>
if you use "bits/stdc++.h" header file then no need to write "iostream" and "iomanip" 
header files because it includes a lot of implementation-specific header files.
the Header "iomanip" defines the manipulator function setprecision() but 
if you use bits/stdc++.h header file then no need to use "iomanip" header file.
*/

#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653
int main()
{
    double r,area;
    cin>>r;
    area= pi*r*r;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(9);
    cout<<area;
}


