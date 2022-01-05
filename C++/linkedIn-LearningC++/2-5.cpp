// Learning C++
// Exercise 02_05
// Preprocessor directives, by Eduardo Corpeño

#include <cstdint>
#include <iostream>
#include <string>

#define CAPACITY 5000
// #define DEBUG

using namespace std;

int main() {
  int32_t large = CAPACITY;
  uint8_t small = 37;
#ifdef DEBUG
  cout << "[About to perform addition]" << endl;
#endif
  large += small;
  cout << "The large integer is: " << large << endl;
  return (0);
}
