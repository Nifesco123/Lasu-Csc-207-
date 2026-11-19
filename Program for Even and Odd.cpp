#include <iostream>
using namespace std;

int main()
{
    int numb;

    cout << "Enter a numb: ";
    cin >> numb ;

    if (numb  % 2 == 0)
    {
        cout << numb<< " is an even number";
    }
    else
    {
        cout << numb<< " is an odd number ";
    }

    return 0;
}
