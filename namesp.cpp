#include <iostream>
using namespace std;

namespace mySpace
{
    int value = 30;
    string compute()
    {
        return "Hello computer man";
    };
}

int value = 10;

int main()
{
    double value = 20;
    cout << "Local Variable " << value << endl;    // Local Variable
    cout << "Global Variable " << ::value << endl; // Global valiable :: Scope resolution operator show global scope
    cout << "The value in myspace is " << mySpace::value << endl;
    cout << "The function compute in namespace is " << mySpace::compute << endl;
    return 0;
}