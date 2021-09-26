
//char str[4] = "C++";

//char str[] = {'C','+','+','\0'};

//char str[4] = {'C','+','+','\0'};

//char str[100] = "C++";


#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: "<<str<<endl;

    return 0;
}