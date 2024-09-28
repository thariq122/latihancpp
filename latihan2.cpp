#include <iostream>
using namespace std;

// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
int main()
{
 
    // tampilkan bilangan ganjil dari 10 sampai 20
    for(int n=1; n<=8; n++)
    {
        if(n % 2 > 0)
            cout <<  "* * * * * * * *" << endl;
        else
            cout <<  " * * * * * * * *" << endl;
    }
    cout << endl;
}