#include <iostream>
using namespace std;

//This program gives the hcf of two nos.

int hcf_fn(int a,int b)
  {
      if (a>b)
      {
          a=a-b;
          return hcf_fn(a,b);
      }
      else if (b>a)
      {
          b=b-a;
          return hcf_fn(a,b);
      }
      else
          return a;
  }

int main () {

        int a,b;
        cout << "Enter any two nos. \n";
        cin >> a >> b;

        cout << "HCF of " << a << " and " << b << " = " << hcf_fn(a,b);

return 0;
}
