#include <iostream>

using namespace std;

double factorial_fn(int n);

int main () {
    //program to find the factorial of any no.
    int n;
    cout << "Enter any no.";
    cin >> n ;
    cout << n << "! = " << factorial_fn(n);



return 0;
}

double factorial_fn(int n)
     {
         if (n!=0)
            return n*factorial_fn(n-1);
         else
            return 1;
     }
