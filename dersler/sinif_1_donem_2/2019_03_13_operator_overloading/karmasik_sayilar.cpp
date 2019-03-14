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

  Karmasik operator+(Karmasik &x) { return Karmasik(r + x.r, i + x.i); }
  Karmasik operator-(Karmasik &x) { return Karmasik(r - x.r, i - x.i); }

  void operator=(Karmasik &x) {
    r = x.r;
    i = x.i;
  }

  void yaz() { std::cout << r << " + " << i << "i" << std::endl; }
};

// Main
int main(int argc, char *argv[]) {
  Karmasik a(5, 3);
  Karmasik b = a;
  a.yaz();
  b.yaz();

  Karmasik c = a + b;
  c.yaz();

  Karmasik d = c - a;
  d.yaz();
}
