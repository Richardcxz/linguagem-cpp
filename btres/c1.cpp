#include <iostream>
using namespace std;

int main()
{
    // Declaring a string object
    string str;
    cout << "insira uma frase: ";
    getline(cin, str);

    cout << "vc escreveu: " << str << endl;
    return 0;
}