// Learning C++
// Challenge 01_04
// Console Interaction, by Eduardo Corpeño

#include <iostream>
#include <string>

using namespace std;

int main() {
  string msg;
  cout << "What is your name?\n";
  getline(cin, msg);
  cout << "Hello, " << msg << "!" << endl;
  return (0);
}
