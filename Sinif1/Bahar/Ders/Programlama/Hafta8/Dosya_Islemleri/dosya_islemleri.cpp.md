```cpp
/*
 * Konu: Dosya İşlemleri
 * Tarih: 2019.04.24
 *
 *  Dosya Okuma
 *  Dosya Yazma
 *  Dosya Silme
 *  Dosya Icerisinde Arama
 *  Dosya Guncelleme
 */

#include <iostream>
#include <cstring>
#include <fstream> /* dosya islemleri icin kutuphane */

//Main
int main(int argc, char *argv[])
{
  const char* dosya_ismi = "metin_belgesi.txt";

  // YAZMA ISLEMI
  std::ofstream dosya_yaz(dosya_ismi);
  if(dosya_yaz.is_open())
  {
    // dosyanin icine yaz.
    dosya_yaz << "Bu metin" << dosya_ismi << "'in icindedir." << std::endl;
    dosya_yaz << "Baska bir metin." << std::endl;
    // dosyayi kapat. (Ilerde tekrar kullanacagim icin kapatmiyorum.)
    // dosya_yaz.close();
    std::cout << "Dosya olusturulup icine yazildi." << std::endl;
  }


  // OKUMA ISLEMI
  std::ifstream dosya_oku(dosya_ismi);
  if(dosya_oku.is_open()) {
    /* Dosyanin her satiri while dongusu icerisinde "satir"
     * degiskenine tanimlanacak. Boylece dongu icerisinde
     * Dosyanin icindeki satirlar ekrana bastirilabilir.
     */
    std::cout << '\n';
    std::string satir;
    while(getline(dosya_oku, satir))
    {
      std::cout << "Okunan satir: " << satir << std::endl;
    }
    std::cout << "\n" << dosya_ismi << " okuma islemi bitti." << std::endl;
    std::cout << "\n";
    dosya_oku.close();
  }


  // SILME ISLEMI
  // Eger basariyla silinirse degisken 0'a esitlenir.
  int silindi_mi = remove(dosya_ismi);

  if(silindi_mi == 0) {
    std::cout << dosya_ismi << " silindi.\n" << std::endl;
  } else {
    std::cout << dosya_ismi << " silinemedi." << std::endl;
  }


  // ARAMA ISLEMI
  // Once aranacak dosyayi yazma islemi ile olusturalim.
  // aranacak dosyayi yazma islemi
  if(dosya_yaz.is_open())
  {
    // dosyanin icine yaz.
    dosya_yaz << "Ornek metin\nKlise olmayan mesaj" << std::endl;
    // dosyayi kapat.
    dosya_yaz.close();
  }

  // arama islemi
  const char* aranacak_dosya = "aranacak_dosya.txt";
  const char* gecici_dosya   = "temp.txt";
  std::string satir_, aranacak = "test";

  int anahtar = 0;

  std::ifstream dosyada_ara(aranacak_dosya);
  std::cout << "Aranacak metin: " << aranacak << std::endl;
  if(dosyada_ara.is_open())
  {
    do{
      getline(dosyada_ara, satir_);
      if(aranacak == satir_) {
        std::cout << aranacak << " bulundu" << std::endl;
        anahtar = 1;
      }
    }while(!dosyada_ara.eof()); // Dosyanin sonuna gelmediysek
                                // donguyu devam ettir.
    dosyada_ara.close();
    if(anahtar == 0) {
      std::cout << "Bulunamadi." << std::endl;
    }
  }

  // GUNCELLEME ISLEMI
  std::ifstream eski_dosya(aranacak_dosya);
  std::ofstream yeni_dosya(gecici_dosya);

  std::string satirlar;
  std::string eski_deger = "ornek metin";
  std::string yeni_deger = "daha guzel bir metin";

  std::cout << "\n" << eski_deger << " " << yeni_deger << " ile degisecek" << std::endl;
  if(eski_dosya.is_open())
  {
    do{
      getline(eski_dosya, satirlar);
      if(satirlar == eski_deger) {
        yeni_dosya << yeni_deger << std::endl;
      } else {
        yeni_dosya << satirlar << std::endl;
      }
    }while(!eski_dosya.eof()); // Dosyanin sonuna gelmediysek
                                // donguyu devam ettir.

    eski_dosya.close();
    yeni_dosya.close();

    int silindi_mi = remove(aranacak_dosya);
    int isim_degisti_mi = rename(gecici_dosya, aranacak_dosya);

    if(silindi_mi == 0 && isim_degisti_mi == 0) {
      std::cout << "\nIslemler basariyla gerceklestirildi." << std::endl;
    }
  }
  return 0;
}
```
