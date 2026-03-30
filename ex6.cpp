#include <iostream>
using namespace std;

int main() {

  const int n = 3;
  int array[n][n];

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++) {
      cout << "enter matrix element. Row " << i + 1 <<" and Column " << j + 1 << "  :  ";
      cin >> array[i][j];
    }
  }

  cout << "\nMatrix" << endl;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << array[i][j] << "  ";
    }
    cout << endl;
  }

  return 0;
}
