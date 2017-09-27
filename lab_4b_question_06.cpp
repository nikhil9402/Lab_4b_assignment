#include <iostream>
using namespace std;

void rev_fn(int);



int main() {
       int n;
       cout << "*This program gives the reverse of a number.*\n";
       cout << "Enter any no.\n";
       cin >> n;
       cout << "Reverse of " << n << " is " ;
       rev_fn(n);
return 0;
}

void rev_fn(int n){
       if (n!=0)
        {
            cout << n%10;
            return rev_fn(n/10);
        }
       else
           return ;

}

