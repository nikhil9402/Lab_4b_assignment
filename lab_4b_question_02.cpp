#include <iostream>
using namespace std;

// This program prints all natural numbers between 1 to n using recursion.
void printNum_fn(int ,int );

int main () {
      int n,lowerLimit=1;
      cout << "Enter the value of n:\n";
      cin >> n ;

      cout << " Natural nos. between 1 and " << n << " are:\n";
      printNum_fn(lowerLimit ,n);

return 0;
}

void printNum_fn(int lowerLimit,int n){
        if (lowerLimit > n )
            return;

            cout << lowerLimit << endl;
            printNum_fn(lowerLimit+1 , n );

}
