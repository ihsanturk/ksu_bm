#include <iostream>

// Classes
class Karmasik {
  double r;
  double i;

public:
  // Constructor
  Karmasik(double r_, double i_) {
    r = r_;
    i = i_;
  }

  void yaz() { 
    std::cout << r << " + " << i << "i" << std::endl; 
  }
};

// Main
int main(int argc, char *argv[]) {
  Karmasik a(5, 3);
  a.yaz();
}

// Functions
