#include <iostream>
#include <ctime>
using namespace std;

int main() {

  const int n = 3;
  int array[n][n];
  int transpored[n][n];
  srand(time(NULL));

  cout << "\nstart Matrix" << endl;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++) {
      array[i][j] = rand() % 64 + 1;
      cout << array[i][j] << "\t";
    }
    cout << endl;
  }


  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      transpored[i][j] = array[j][i];
    }
  }

  cout << "\ntranspored Matrix" << endl;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++) {
      cout << transpored[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}