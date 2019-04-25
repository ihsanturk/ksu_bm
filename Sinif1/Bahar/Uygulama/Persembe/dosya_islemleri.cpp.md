```cpp
/*
 * Konu: Dosya İşlemleri Sınıfı
 * Tarih: 2019.04.24
 */
#include <iostream>
#include <fstream>

// Classes
class DosyaIslemleri
{
public:
  const char* dosya_ismi;

  // Yapici Fonksiyon
  DosyaIslemleri(const char* dosya_ismi_)
  {
    dosya_ismi = dosya_ismi_;
  }

  void harf_harf_yaz(char text[])
  {
    std::ofstream dosya(dosya_ismi);
    if(dosya.is_open())
    {
      int i = 0;
      while(text[i] != '\0')
      {
        dosya << text[i] << std::endl;
        i++;
      }
    }
    dosya.close();
  }

  void oku()
  {
    std::ifstream dosya(dosya_ismi);
    if(dosya.is_open())
    {
      std::string satir;
      while(getline(dosya, satir))
      {
        std::cout << satir << std::endl;
      }

    }
    dosya.close();
  }

  void sil()
  {
    int sonuc = remove(dosya_ismi);
  }

  void guncelle(std::string eski, std::string yeni)
  {
    std::ifstream eski_dosya(dosya_ismi);
    std::ofstream tmp("tmp.txt");

    std::string satir;
    if(eski_dosya.is_open())
    {
      do{
        getline(eski_dosya, satir);
        if(satir == eski) {
          tmp << yeni << std::endl;
        } else {
          tmp << satir;
          if(!eski_dosya.eof()) {
            tmp << "\n";
          }
        }
      }while(!eski_dosya.eof());

      eski_dosya.close();
      tmp.close();

      int silindi_mi = remove(dosya_ismi);
      int isim_degisti_mi = rename("tmp.txt", dosya_ismi);

      if(silindi_mi && isim_degisti_mi) {
        std::cout << "Guncellendi." << std::endl;
      }
    }
  }
};

//Main
int main(int argc, char *argv[]) {
  char my_name[10] = {'a', 'l', 'i', ' ', 'i', 'h', 's', 'a', 'n', '\0'};
  DosyaIslemleri dosya("ismim.txt");

  dosya.harf_harf_yaz(my_name);
  dosya.oku();
//  dosya.sil();
  dosya.guncelle("a", "A"); // a'lari A yap
  dosya.guncelle("i", "I"); // i'leri I yap
  dosya.guncelle("l", "L"); // l'leri L yap
  std::cout << "\nYeni hali:\n";
  dosya.oku();
}
```
