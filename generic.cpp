#include <iostream>
using namespace std;
template <typename T>
// T is representing any type
T addition(T a, T b)
{
  return a + b;
}

int main()
{
  cout << "Adding two integers: " << addition<int>(10, 20) << endl;
  cout << "Adding two doubles: " << addition<double>(10.6, 20.6) << endl;
  cout << "Adding two floats: " << addition<float>(10.4f, 20.7f) << endl;
  cout << "Adding two strings: " << addition<string>("Hello", "World") << endl;

  return 0;
  
}