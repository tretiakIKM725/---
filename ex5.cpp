#include <iostream>
#include <ctime>
using namespace std;

int main() {

  const int n = 10;
  int array[n];

  srand(time(NULL));

  cout << "Standart: ";
  for (int i = 0; i < n; i++)
  {
    array[i] = rand() % 8 + 1;
    cout << array[i] << "  ";
  }

  int x = 0;
  cout << "Enter x : ";
  cin >> x;

  int newarr = 0;
  
  for ( int i = 0; i < n; i ++) {
    if (array[i] != x) {
      array[newarr] = array[i];
      newarr++;
    }
  }

  cout << "result: ";
  for (int i = 0; i < newarr; i++)
  {
    cout << array[i] << "  ";
  }

  return 0;
}