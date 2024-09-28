#include <iostream>
using namespace std;

int main()
{
    // tampilkan bilangan dari 10 sampai 20
    for(int n=10; n<=20; n++)
    {
        cout << n << " ";
    }
    cout << endl;

    // tampilkan bilangan ganjil dari 10 sampai 20
    for(int n=10; n<=20; n++)
    {
        if(n % 2 > 0)
             cout << n << " ";
    }
    cout << endl;
    // tampilkan bilangan genap dari 10 sampai 20
    for(int n=10; n<=20; n++)
    {
        if(n % 2 == 0)
             cout << n << " ";
    }
    cout << endl;
}