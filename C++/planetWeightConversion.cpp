#include <iostream>
//converts weight on Earth to a different planet's weight.

int main() {
  double earthWeight, relGrav, planetWeight;
  int planetNum;
  std::string planet;
	        
  std::cout << "What is your earth weight?\n";
  std::cin >> earthWeight;
  std::cout << "Enter a number for the planet you want to fight on: ";
  std::cin >> planetNum;
  switch(planetNum) {
    case 1 :
      planet = "Venus";
      relGrav = 0.78;
      break;
    case 2 :
      planet = "Mars";
      relGrav = 0.39;
      break;
    case 3 :
      planet = "Jupiter";
      relGrav = 2.65;
      break;
   case 4 :
      planet = "Saturn";
      relGrav = 1.17;
      break;
   case 5 :
      planet = "Uranus";
      relGrav = 1.05;
      break;
   case 6 :
      planet = "Neptune";
      relGrav = 1.23;
      break;
  default : 
      planet = "Earth";
      relGrav = 1;
      break;
  }
  planetWeight = relGrav * earthWeight;
  std::cout << "Your weight on " << planet << " is " << planetWeight << ".\n";
}
