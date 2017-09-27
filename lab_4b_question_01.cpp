#include <iostream>
using namespace std;

// This program gives the power of any number using recursion.

int pow_fn(int, int);


int main() {
    int b,p,result;
  cout << "Enter base and power\n";
  cin >> b >> p;
  result = pow_fn(b,p);
  cout << b << "^" << p << " is " << pow_fn(b,p) <<endl ;
  cout << "Have a nice day!\n";
return 0;
}

 int pow_fn(int b, int p) {
       if (p>0)
           return (b*pow_fn(b,p-1));
       else
           return 1;

   }
