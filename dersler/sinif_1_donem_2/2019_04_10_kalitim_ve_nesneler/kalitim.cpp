#include <iostream>

//Classes
class TemelSinif:
  // Class Attributes (Sinif Ozellikleri)
  int bazi_ozelikler;
  float bazi_ozelikler;

  // Constructor (Yapici Fonksiyon)
  TemelSinif(int ornek, float ornek1) {
    std::cout << "Ornek kodlar..." << std::endl;
  }

  // Class Methods (Sinif Metodlari)
  void bazi_metodlar() {
    std::cout << "Ornek kodlar..." << std::endl;
  }

  void bazi_metodlar() {
    std::cout << "Ornek kodlar..." << std::endl;
  }

// Temel sinifin ozelliklerini tasiyan alt sinif
class AltSinif: public TemelSinif
  // Class Attributes (Sinif Ozellikleri)
  int bazi_ozelikler;
  float bazi_ozelikler;
  void ...;
  void ..;
  
  // Constructor (Yapici fonksiyon)
  AltSinif(int ornek, float ornek1) {
    /* Bu class TemelSinifin bir alt sinifi niteliginde
     * oldugu icin constructor fonksiyonu 
     *
     * */
  }

  // Class Methods (Sinif Metodlari)
  void bazi_metodlar() {
    std::cout << "Ornek kodlar..." << std::endl;
  }

  void bazi_metodlar() {
    std::cout << "Ornek kodlar..." << std::endl;
  }


//Main
int main(int argc, char *argv[]) {
	
}
