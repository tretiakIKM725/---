#include <iostream>
#include <ctime>
using namespace std;

int main() {

  const int n = 5;
  int array[n][n];
  int sum = 0;
  srand(time(NULL));

  cout << "\nMatrix" << endl;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++) {
      array[i][j] = rand() % 64 + 1;
      cout << array[i][j] << "\t";
    }
    cout << endl;
  }

  int maxElement = array[0][0];
  int maxElR = 0;
  int maxELC = 0;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++) {
      if (maxElement < array[i][j]){
        maxElement = array[i][j];
        maxElR = i;
        maxELC = j;
      }
    }
  }

  cout << "Max Element : " << maxElement << endl;
  cout << "Max Element cords :   Row " << maxElR + 1 << " and Column" << maxELC + 1 << endl;
  sum = 0;

  return 0;
}
