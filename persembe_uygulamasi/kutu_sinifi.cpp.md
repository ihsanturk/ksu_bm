```cpp
#include <iostream>

class Kutu {
private:
  int yukseklik;
  int genislik;
  int derinlik;


public:
  // Constructor
  Kutu(int y, int g, int d) {
    yukseklik = y;
    genislik  = g;
    derinlik  = d;
  }


  // + Operatoru
  Kutu operator+(Kutu &x) {
    return Kutu(yukseklik + x.yukseklik, 
                genislik  + x.genislik,
                derinlik  + x.derinlik);
  }

  // = Operatoru
  void operator=(Kutu &x) {
    yukseklik = x.yukseklik; 
    genislik  = x.genislik;
    derinlik  = x.derinlik;
  }

  // Yaz fonksiyonu
  void yaz() {
    std::cout << this->yukseklik << ", "        // Yukseklik, genislik ve derinlik degiskenleri
              << this->genislik  << ", "        // private oldugu icin "this->" komutunu kullandim.
              << this->derinlik  << std::endl;
  }
};

// Main
int main() {
  Kutu k1(6, 1, 8);
  Kutu k2(3, 1, 4);

  Kutu k3 = k1 + k2;

  std::cout << "k1: "; k1.yaz();
  std::cout << "k2: "; k2.yaz();
  std::cout << "k3: "; k3.yaz();
}
