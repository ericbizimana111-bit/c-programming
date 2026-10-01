#include <iostream>
#define NumberOfDistricts = 30 // number of dsitrics //declaration of the constant

int myGlobal = 7;

int cout()
{
    return myGlobal * myGlobal;
}

namespace userDefined
{
    int insideNamespace = 42;

    int cout()
    {
        return insideNamespace;
    }
}

int main()
{
    int cout = 15;

    std::cout << "the local variable cout in main is " << cout << std::endl;
    std::cout << "The variable in userDefined namespace is " << userDefined::insideNamespace << std::endl;
    std::cout << "The output of cout() in usedrDefined is " << userDefined::cout() << std::endl;
    std::cout << "the valeis of my Global " << myGlobal << std::endl;
    std::cout << "The output of global cout() is " << ::cout() << std::endl;
    std::cout << ::NumberOfDistricts << std::endl;


    return 0;
}
