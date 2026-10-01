#include <iostream>

const double PI = 3.14159265;

double computeArea(double radius)
{
    return PI * radius * radius;
}



int main()
{
    double radius;
    std::cout <<"Enter radius of circle:";
    std::cin >> radius;
    double circumference = 2 * PI * radius;
    double area = computeArea(radius);

    std::cout << "circumference: " << circumference << std::endl;
    std::cout << "Area:" << area << std::endl;

    return 0;
}
