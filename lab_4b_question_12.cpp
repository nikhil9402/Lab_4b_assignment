#include <iostream>

using namespace std;

//This program gives the LCM of two nos.

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

        int a,b,hcf,lcm;
        cout << "Enter any two nos. \n";
        cin >> a >> b;

        hcf=hcf_fn(a,b);
        lcm=((a*b)/hcf);

        cout << "LCM of " << a << " and " << b << " = " << lcm;


return 0;
}
