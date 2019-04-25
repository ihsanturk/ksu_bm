```cpp
/*
 * Konu: String Sınıfı
 * Tarih: 2019.03.06
 */

#include <cstring>
#include <iostream>

// Classes
class String {
  int boyut;
  char *metin;

public:
  String(const char *veri) {
    boyut = strlen(veri);
    metin = new char[boyut + 1];
    strcpy(metin, veri);
  }

  void yaz() { std::cout << metin << std::endl; }
};

// Main
int main(int argc, char *argv[]) {
  String isim("Hasan");
  isim.yaz();

  return 0;
}
```
