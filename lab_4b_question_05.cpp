#include <iostream>

using namespace std;


int sum_even(int ,int );
int sum_odd(int ,int );

int main () {
      int lowerLimit,upperLimit;

      cout << "Enter lower limit:\n";
      cin >> lowerLimit;
      cout << "Enter upper limit:\n";
      cin >> upperLimit;

      cout << "Sum of even natural nos. between " << lowerLimit << " and " << upperLimit << " is " <<  sum_even(lowerLimit ,upperLimit) << endl;
      cout << "Sum of odd natural nos. between " << lowerLimit << " and " << upperLimit << " is " <<  sum_odd(lowerLimit ,upperLimit) << endl ;

return 0;
}

int sum_even(int lowerLimit,int upperLimit){
        if (lowerLimit > upperLimit )
            return 0;
        else
           {
             if (lowerLimit%2==0)
                 return lowerLimit+sum_even(lowerLimit+2 , upperLimit);
             else
                return sum_even(lowerLimit+1 , upperLimit);
           }
}
int sum_odd(int lowerLimit,int upperLimit){
        if (lowerLimit > upperLimit )
            return 0;
        else
           {
             if (lowerLimit%2==0)
                 return sum_odd(lowerLimit+1 , upperLimit);
             else
                return  lowerLimit+sum_odd(lowerLimit+2 , upperLimit);
           }
}
