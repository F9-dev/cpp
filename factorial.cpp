#include <iostream>
int getvalue() {
  int value {};
  std::cin >> value;
  return value;
}

int main () {
  std::cout << "This is a factorial calculator\n";
  std::cout << "Please input a positive integer:";
  
  int factorial {getvalue()};
  //std::cout << factorial << '\n'; - for debug
  
  int factor {factorial - 1};
  //std::cout << factor << '\n'; - for debug
  

  for (int counter = factorial * -1; counter < -1; counter++) { 
    factorial = factorial * factor;
    factor--;
  }
  std::cout << factorial;
  return 0;
}
