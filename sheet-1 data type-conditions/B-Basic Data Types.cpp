/* You can use #include <iostream> and
#include <iomanip> header file. But using bits/stdc++.h in C++
may make your code less portable because it includes a lot of implementation-specific header files*/

#include<bits/stdc++.h>
using namespace std ;
int main() {
    int a;
    long long int b;
    char c ;
    float d;
    double e ;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    //the Header "iomanip" defines the manipulator function setprecision() but if you use bits/stdc++.h header file then no need to use "iomanip" header file
    cout<< showpoint;
    cout << fixed;
    cout << setprecision(1); //as 14049.3 , setprecision(1); if 14049.32 then setprecision(2)
    cout << e << endl;
    return 0;
}