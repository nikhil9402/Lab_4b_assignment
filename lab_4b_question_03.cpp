#include <iostream>
using namespace std;

//To print all even or odd numbers in given range using recursion.

void printOdd_fn(int ,int);
void printEven_fn(int ,int);
int main () {
      int lowerLimit,upperLimit;

      cout << "Enter lower limit:\n";
      cin >> lowerLimit;
      cout << "Enter upper limit:\n";
      cin >> upperLimit;

      cout << "Odd natural nos. between " << lowerLimit <<  " and " << upperLimit << " are \n";
      printOdd_fn(lowerLimit , upperLimit);
      cout << "And even natural nos. between " << lowerLimit <<  " and " << upperLimit << " are \n";
      printEven_fn(lowerLimit , upperLimit);

    cout << "Have a nice day!\n";
return 0;
}

void printOdd_fn(int lowerLimit,int upperLimit){
        if (lowerLimit > upperLimit )
        {
             return ;
        }
        else if (lowerLimit%2==0)
         {
            cout << lowerLimit+1 << endl;
            printOdd_fn(lowerLimit+3 , upperLimit );
         }
        else
        {
            cout << lowerLimit << endl;
            printOdd_fn(lowerLimit+2 , upperLimit );
        }
}

void printEven_fn(int lowerLimit,int upperLimit){
        if (lowerLimit > upperLimit )
        {
             return ;
        }
        else if (lowerLimit%2==0)
         {
            cout << lowerLimit << endl;
            printEven_fn(lowerLimit+2 , upperLimit );
         }
        else
        {
            cout << lowerLimit+1 << endl;
            printEven_fn(lowerLimit+3 , upperLimit );
        }
}
