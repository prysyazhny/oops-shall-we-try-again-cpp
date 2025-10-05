#include <string>
#include <iostream>
#include <limits>

bool oops(int lowerBound, int upperBound, std::string promptMessage, std::string errorMessage) {
   std::cout << promptMessage << std::endl;
   int input;
   std::cin >> input;
   
   if (input < lowerBound || input > upperBound) {
       std::cout << errorMessage << std::endl;
       return false;
   } else {
       std::cout << "The value chosen by the user is " << input << std::endl;
       return true;
   }
}
   