#include <iostream>
using namespace std;

// This program gives the sum of the digits of a given no.
int sum_fn(int);
int a,sum;

int main () {
    int n;
    cout << "Enter any no.";
    cin >> n ;
    sum_fn(n);
    cout << "Sum of the digits is " << sum;
return 0;
}

int sum_fn(int n)
  {        //Sum of the digits
      if(n!=0)
      {
          a=n%10;
          sum = sum + a;
      return sum_fn(n/10);
      }

      else
         return 0;
  }
