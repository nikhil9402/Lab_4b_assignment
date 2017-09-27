#include <iostream>
using namespace std;

//This program finds the sum of all natural numbers between 1 to n using recursion.

int sum(int ,int );

int main () {
      int n,lowerLimit=1;
      cout << "Enter the value of n:\n";
      cin >> n ;

      cout << "Sum of natural nos. between 1 and " << n << " is " <<  sum(lowerLimit ,n) << endl;

return 0;
}

int sum(int lowerLimit,int n){
        if (lowerLimit > n )
            return 0;
        else
            return lowerLimit+sum(lowerLimit+1 , n);

}





