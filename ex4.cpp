#include <iostream>
#include <ctime>
using namespace std;

int main() {

  const int n = 10;
  int array[n];

  srand(time(NULL));

  cout << "Standart: " ;
  for (int i = 0; i < n; i++)
  {
    array[i] = rand() % 16 + 1;
    cout << array[i] << "  ";
  }

  cout << "\nReverse : " ;
  for (int i = 0; i < n; i++)
  {
    cout << array[n - i - 1] << "  ";
  }

  return 0;
}