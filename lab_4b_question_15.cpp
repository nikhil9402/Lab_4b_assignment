#include <iostream>

using namespace std;

void max_fn(int[],int,int,int);
void min_fn(int[],int,int,int);
int main () {
  int arr[10],N,i,max,min;
  cout << "Enter length of the array : ";
  cin >> N;
  cout << "Enter elements of the array : ";
  for (i=0;i<N;i++)
  {
      cin >> arr[i];
  }
  max = arr[0];
  max_fn(arr,N,max,1);
  min = arr[0];
  min_fn(arr,N,min,1);
  return 0;
}

void max_fn(int arr[], int N, int max, int i=1)
  {
    if (i>=N)
     {
       cout << "Max of the elements in the array is " << max << endl;
       return ;
     }
    else 
     {
       if (max<arr[i]) {
           max=arr[i];
           max_fn(arr,N,max, i+1);
          }
       else 
         max_fn(arr,N,max,i+1);
     }
    return;
     
  }

void min_fn(int arr[], int N, int min, int i=1)
  {
    if (i>=N)
     {
       cout << "Min of the elements in the array is " << min << endl;
       return ;
     }
    else 
     {
       if (min>arr[i]) {
           min=arr[i];
           min_fn(arr,N,min, i+1);
          }
       else 
         min_fn(arr,N,min,i+1);
     }
    return;
     
  }

