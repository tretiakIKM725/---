#include <iostream>
#include <ctime>
using namespace std;

int main() {

  const int n = 4;
  int array[n][n];
  int sum = 0;
  srand(time(NULL));

  cout << "\nMatrix" << endl;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++) {
      array[i][j] = rand() % 8 + 1;
      cout << array[i][j] << "  ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++) {
      sum += array[i][j];
    }
    cout << "Sum of row " << i + 1 << " = " << sum <<endl;
    sum = 0;
  }
  
  return 0;
}