#include <iostream>

#include "src/oops.hpp"

int main() {

  bool response = false;
  int lowerBound = 1;
  int upperBound = 10;
  std::string promptMessage = "Please enter a value";
  std::string errorMessage = "Your value is invalid";

  while (!response) {
    response = oops(lowerBound, upperBound, promptMessage, errorMessage);
  }

  return 0;
}
