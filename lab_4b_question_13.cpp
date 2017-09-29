#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

void array_fn(int arr[], int start, int len)
{
    if  (start >= len)
    {
        return ;
    }
    else
    {
        cout << setw( 4 ) << start << setw(13 ) << arr[start] << endl;
        array_fn(arr, start+1, len);
    }
}

int main () {
    int arr[10],N,i;
  cout << "Enter length of the array : ";
  cin >> N;
  cout << "Enter elements of the array : ";
  for (i=0;i<N;i++)
  {
      cin >> arr[i];
  }


  cout << "Element" << setw( 13 ) << "Value" << endl;
  array_fn(arr,0,N);



return 0;
}
