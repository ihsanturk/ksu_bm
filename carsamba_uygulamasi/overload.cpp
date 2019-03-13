#include <iostream>

//Classes
class Saat {
public:
  int saat;
  int dakika;
  int saniye;

  // Constructor
  Saat(int s_, int d_, int sn_) {
    saat = s_;
    dakika = d_;
    saniye = sn_;
  }

  Saat operator+(Saat &x) {
    int sn_bolum = (x.saniye + saniye) / 60;
    int d_bolum  = (x.dakika + dakika) / 60;

    int sn_kalan = (x.saniye + saniye) % 60;
    int d_kalan  = (x.dakika + dakika) % 60;
    int s_kalan  = (x.saat + saat) % 12;

    int yeni_saat   = s_kalan + d_bolum;
    int yeni_dakika = d_kalan + sn_bolum;
    int yeni_saniye = sn_kalan;

    Saat t(yeni_saat, yeni_dakika, yeni_saniye);
    return t;
  }

  Saat operator=(Saat &x) {
    saat = x.saat;
    dakika = x.dakika;
    saniye = x.saniye;
    return *this;
  }

  void yaz() {
    std::cout << saat << "." << dakika << "." << saniye << std::endl;
  }
};


//Main
int main(int argc, char *argv[]) {
  Saat s1(4, 30, 10);
  Saat s2(9, 23, 50);

  Saat s3 = s2 + s1;
  
  std::cout << "  s1: "; s1.yaz();
  std::cout << "  s2: "; s2.yaz();
  std::cout << "  s3: "; s3.yaz();
}
