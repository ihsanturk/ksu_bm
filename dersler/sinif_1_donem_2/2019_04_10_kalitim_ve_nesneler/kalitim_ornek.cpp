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
 * class Ogretmen:
 *   |---> Adsoyad
 *   |---> Cinsiyet
 *   |---> Brans
 *   |---> Deneyim
 *   |---> Yas
 *   |
 *   class Idareci:
 *     |---> Okul
 *     |---> Unvan
 *     |---> Sure
 *
 * Burada Idareci sinifini Ogretmen sinifinin
 * bir alt sinifi olarak kabul ettik. Yani Idareci
 * sini ogretmen sinifinin tum ozelliklerini ve
 * fonksiyonlarini (metotlarini) ve ayrica kendine has
 * ozellikleri ve metotlari da icerecektir.
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
  std::string unvan;
  int         yas;

  Ogretmen(std::string adsoyad_, 
           std::string cinsiyet_, 
           std::string brans_,
           std::string deneyim_,
           std::string unvan_,
           int yas_) {
    adsoyad  = adsoyad_;
    cinsiyet = cinsiyet_;
    brans    = brans_;
    deneyim  = deneyim_;
    unvan    = unvan_;
    yas      = yas_;
  }

  // Class Methods (Sinif Metotlari)
  void goster() {
    std::cout << "Adi soyadi: " << adsoyad  << "\n"
              << "Cinsiyeti:  " << cinsiyet << "\n"
              << "Bransi:     " << brans    << "\n"
              << "Deneyimi:   " << deneyim  << "\n"
              << "Unvani:     " << unvan    << "\n"
              << "Yasi:       " << yas      << std::endl;
  }

  void guncelle(std::string adsoyad_, 
                std::string cinsiyet_, 
                std::string brans_,
                std::string deneyim_,
                std::string unvan_,
                int yas_)
  {
    adsoyad  = adsoyad_;
    cinsiyet = cinsiyet_;
    brans    = brans_;
    deneyim  = deneyim_;
    unvan    = unvan_;
    yas      = yas_;
  }
};

// Ogretmen sinifinin ozelliklerini tasiyan alt sinif
class Idareci: public Ogretmen {
public:
  // Class Attributes (Sinif Ozellikleri)
  std::string okul;
  int         gorev_yili;

  Idareci(std::string adsoyad_, 
          std::string cinsiyet_, 
          std::string brans_,
          std::string deneyim_,
          std::string unvan_,
          int         yas_,
          std::string okul_, 
          int gorev_yili_) {
    Ogretmen::Ogretmen(adsoyad_, cinsiyet_, 
                       brans_, deneyim_,
                       unvan_, yas_);
    okul       = okul_;
    gorev_yili = gorev_yili_;
  }
  /*
   * TODO
   * Constructor ile ilgili hata var.
   */

  
  void goster() {
    Ogretmen::goster();
    std::cout << "Okulu:      " << okul << "\n"
              << "Gorev Yili: " << gorev_yili << std::endl;
  }

  void guncelle(std::string adsoyad_, 
                std::string cinsiyet_, 
                std::string brans_,
                std::string deneyim_,
                std::string unvan_, 
                int yas_,
                std::string okul_, 
                int gorev_yili_) 
  {
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
  Ogretmen hasan("Hasan badem",
                 "Erkek",
                 "Programlama",
                 "Doktor", 
                 "Ogretmen", 
                 25);
  std::cout << "hasan nesnesi turedi." << std::endl;
  hasan.goster();

  hasan.guncelle("Hasan badem",
                 "Erkek",
                 "Programlama",
                 "Doktor", 
                 "Uzman Ogretmen", 
                 30);
  std::cout << "hasan nesnesi guncellendi." << std::endl;
  hasan.goster();

  std::cout << "\n";

  Idareci taner("Ibrahim Taner",
                 "Erkek",
                 "Programlama",
                 "Profesor", 
                 "Rektor Yrd.",
                 40,
                 "KSU",
                 3);
  taner.guncelle("Ibrahim Taner",
                 "Erkek",
                 "Programlama",
                 "Profesor", 
                 "Rektor Yrd.",
                 45,
                 "KSU",
                 3);
  taner.goster();
  return 0;
}
