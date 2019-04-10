#include <iostream>

/* Soru:
 *
 * Bir okuldaki ogretmen bilgilerini
 * yonetecek bir sinif yaziniz. Okul
 * idarelerini sisteme dahil edebilecek bir
 * yapi kurgulayiniz.
 * 
 * Yapi su sekilde olacak:
 *
 * Ogretmen:
 *   |---> Adsoyad
 *   |---> Cinsiyet
 *   |---> brans
 *   |---> deneyim
 *   |---> yas
 *
 * Idareci:
 *   |---> Okul
 *   |---> Unvan
 *   |---> Sure
 *
 * Burada Idareci sinifini Ogretmen sinifinin
 * bir alt sinifi olarak kabul ettik. Yani Idareci
 * sini ogretmen sinifinin tum ozelliklerini ve
 * fonksiyonlarini (metodlarini) ve ayrica kendine has
 * ozellikleri ve metodlari da icerecektir.
 *
 */

//Classes
class Ogretmen {
public:
  // Class Attributes (Sinif Ozellikleri)
  std::string adsoyad;
  std::string cinsiyet;
  std::string brans;
  std::string deneyim;
  int         yas;

  // Class Methods (Sinif Metodlari)
  void goster() {
    std::cout << "Adi soyadi: " << adsoyad  << "\n"
              << "Cinsiyeti:  " << cinsiyet << "\n"
              << "Bransi:     " << brans    << "\n"
              << "Deneyimi:   " << deneyim  << "\n"
              << "Yasi:       " << yas      << std::endl;
  }

  void guncelle(std::string adsoyad_, 
                std::string cinsiyet_, 
                std::string brans_,
                std::string deneyim_,
                int yas_) {
    adsoyad  = adsoyad_;
    cinsiyet = cinsiyet_;
    brans    = brans_;
    deneyim  = deneyim_;
    yas      = yas_;
  }
};

// Ogretmen sinifinin ozelliklerini tasiyan alt sinif
class Idareci: public Ogretmen {
public:
  // Class Attributes (Sinif Ozellikleri)
  std::string okul;
  std::string unvan;
  int         gorev_yili;
  
  void goster() {
    Ogretmen::goster();
    std::cout << "Okulu:      " << okul << "\n"
              << "Unavni:     " << unvan << "\n"
              << "Gorev Yili: " << gorev_yili << std::endl;
  }

  void guncelle(std::string adsoyad_, 
                std::string cinsiyet_, 
                std::string brans_,
                std::string deneyim_,
                int yas_,
                std::string okul_, 
                std::string unvan_, 
                int gorev_yili_) {
    adsoyad    = adsoyad_;
    cinsiyet   = cinsiyet_;
    brans      = brans_;
    deneyim    = deneyim_;
    yas        = yas_;
    okul       = okul_;
    unvan      = unvan_;
    gorev_yili = gorev_yili_;
  }
};


//Main
int main(int argc, char *argv[]) {
  Ogretmen hasan;
  hasan.guncelle("Hasan badem",
                 "Erkek",
                 "Programlama",
                 "Doktor", 
                 30);
  hasan.goster();

  std::cout << "\n";
  Idareci taner;
  taner.guncelle("Ibrahim Taner",
                 "Erkek",
                 "Programlama",
                 "Profesor", 
                 40,
                 "KSU",
                 "Rektor Yrd.",
                 3);
  taner.goster();
  return 0;
}
