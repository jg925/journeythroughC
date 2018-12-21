#include<iostream>
//99 bottles lyrics. For loop practice.


int main(){
  for (int i = 99; i > 0; i--){
    std::cout << i << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
    std::cout << i-1 << " bottles of pop on the wall.\n"; 
    std::cout << "\n";
  }
  std::cout << "No more bottles of pop on the wall.\n";
  std::cout << "No more bottles of pop.\n";
  std::cout << "Go to the store and buy some more,\n";
  std::cout << "99 bottles of pop on the wall.\n";
}
