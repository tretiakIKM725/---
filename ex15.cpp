#include <iostream>
using namespace std;

struct Date {
  int day;
  int month;
  int year;
};

struct Person {
  string name;
  Date birthDate;
};

int main() {

  const int n = 3;

  Person people[n] = {
    {"danya", {15, 3, 1990}},
    {"yaroslav",   {22, 7, 1985}},
    {"misha", {10, 1, 2000}}
  };

  cout << "\n===== People =====" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << i + 1 << ". " << people[i].name << "\t"
         << people[i].birthDate.day << "."
         << people[i].birthDate.month << "."
         << people[i].birthDate.year << endl;
  }

  int oldestIndex = 0;

  for (int i = 1; i < n; i++) {
    if (people[i].birthDate.year < people[oldestIndex].birthDate.year) {
      oldestIndex = i;
    } else if (people[i].birthDate.year == people[oldestIndex].birthDate.year) {
      if (people[i].birthDate.month < people[oldestIndex].birthDate.month) {
        oldestIndex = i;
      } else if (people[i].birthDate.month == people[oldestIndex].birthDate.month) {
        if (people[i].birthDate.day < people[oldestIndex].birthDate.day) {
          oldestIndex = i;
        }
      }
    }
  }

  cout << "\nThe oldest person : " << people[oldestIndex].name << endl;
  cout << "Birth date : "
       << people[oldestIndex].birthDate.day << "."
       << people[oldestIndex].birthDate.month << "."
       << people[oldestIndex].birthDate.year << endl;

  return 0;
}