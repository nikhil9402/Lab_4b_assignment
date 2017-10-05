#include <iostream>
using namespace std;

int rev_fn(int n);
bool palin_fn(int n,int sum);

int sum,n;

int main () {
    cout << "Enter any no. \n";
    cin >> n;
    rev_fn(n);
    palin_fn(n,sum);
    if (n==sum)
       cout << n << " is a palindrome.";
    else 
       cout << n << " is not a palindrome.";
    

return 0;
}

int rev_fn(int n) {
      int rem;
      if (n!=0)
        {
          rem = n%10;
          sum = (sum*10)+rem;
          rev_fn(n/10);
        }
      else
         return sum;
     return sum;
}

bool palin_fn(int n,int sum) {
       bool isPalin=0;
       
       if (n==sum)
         {
           isPalin=1;
         }
       return isPalin;
}


