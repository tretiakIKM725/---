#include <iostream>
using namespace std;

int main () {

  const int n = 10;
  int array[n];
  int sum = 0;

  for (int i = 0; i < n; i ++) {
    cout << "Enter number " << i + 1 << " : ";
    cin >> array[i];
    sum += array[i];
  }

  cout << "sum of all numbers : " << sum;

  return 0;
}