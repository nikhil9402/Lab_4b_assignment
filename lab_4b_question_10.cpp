#include <iostream>
using namespace std;
//a C++ program to generate nth Fibonacci term using recursion.
double fibo_recur(int n)
   {
       if (n==1||n==2)
       {
        return 1;
       }
       else
       {
           return fibo_recur(n-1)+fibo_recur(n-2);
       }
   }


int main () {
        int n;
        cout << "Enter any no. \n";
        cin >> n;

        cout << n << "th fibonacci term = " << fibo_recur(n);
return 0;
}
