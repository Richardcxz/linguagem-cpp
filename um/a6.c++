//Working of Implicit type-conversion

#include <iostream>
using namespace std;

int main() {

   int num_int;
   double num_double;

   // implicit conversion
   // assigning a double value to an int variable
   cout << "input a number: \n";
   cin >> num_int;
   num_double = double(num_int);

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;

   return 0;
}