#include <iostream>
#include <ctime>
using namespace std;

int main() {

  const int n = 20;
  int array[n];
  int even = 0;
  int odd = 0;
  srand(time(NULL));

  for (int i = 0; i < n; i++){
    array[i] = rand() % 16 + 1;
    cout << array[i] << "  ";
    if (array[i] % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  cout << "\nodd : " << odd;
  cout << "\neven : " << even;

  return 0;
}