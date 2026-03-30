#include <iostream>
using namespace std;

int main() {

  const int n = 15;
  int array[n] = {4, 2, 3, 1, 5, 9, 7, 13, 9, 4, 11, 15, 8, 14, 11};
  int biggest = array[0];
  int smallest = array[0];
  int smaIndex = 0;
  int bigIndex = 0;

  for (int i = 0; i < n; i++) {
    if (array[i] > biggest) {
      biggest = array[i];
      bigIndex = i;
    }
    if (array[i] < smallest) {
      smallest = array[i];
      smaIndex = i;
    }
    
  }

  cout << "The Biggest numeber is : " << biggest << "\tIndex(from 0 to 14) : " << bigIndex;
  cout << "\nThe Smallest numeber is : " << smallest << "\tIndex(from 0 to 14) : " << smaIndex;

  return 0;
}