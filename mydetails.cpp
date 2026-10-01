#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    int age;
    string gender;
    string name;

    //>> Extraction operator puts something in the variable
    // cout<<"Enter your age ? "<<endl;
    // cin>>age;
    // cout<<"Enter your gender ? "<<endl;
    // cin>>gender;
    // cout<<"you are "<< age << " Years old and you are a "<<gender<<endl;

    // cout << "Enter your age and gender ? " << endl;
    // cin >> age;
    // cin >> gender;
    // cout<<"you are "<< age << " Years old and you are a "<<gender<<endl;

    cout << "Enter your age and gender ? " << endl;
    cin >> age >> gender;
    // Fix: Ignore the leftover 'Enter' key in the buffer
    cin.ignore();
    cout << "Enter your name:" << endl;
    // Get user input in form of a full line
    getline(cin, name);  //getline has a clean slate and will properly pause and wait for you to type your full name
    cout << name << " you are " << age << " Years old and you are a " << gender << endl;
    return 0;

    cin >> age >> gender;

    /*
    only grabs the numbers and words.It leaves the final \n(Enter)
    sitting in the computer's memory  cin.ignore(); throws away that leftover \n
    character.Now, getline(cin, name); has a clean slate and will properly
    pause and wait for you to type your full name.*/
}