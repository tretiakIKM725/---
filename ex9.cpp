#include <iostream>
#include <ctime>
using namespace std;

int main() {

  const int n = 5;
  int array[n][n];
  int mainSum = 0;
  int sideSum = 0;
  srand(time(NULL));

  cout << "\nMatrix" << endl;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++) {
      array[i][j] = rand() % 64 + 1;
      cout << array[i][j] << "\t";
    }
    cout << endl;
  }

  


  for (int i = 0; i < n; i++){
    mainSum += array[i][i];
    sideSum += array[i][n - i - 1];
  }

  cout << "\nmain diagonal sum : " << mainSum << endl;
  cout << "side diagonal sum : " << sideSum << endl;

  return 0;
}