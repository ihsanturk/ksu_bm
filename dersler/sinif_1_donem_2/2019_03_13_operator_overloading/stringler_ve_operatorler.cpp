#include <cstring>
#include <iostream>

// Classes
class String {
  int boyut;
  char *metin;

public:
  // Constructor
  String(const char *veri) {
    boyut = strlen(veri);
    metin = new char[boyut + 1];
    strcpy(metin, veri);
  }

  String operator=(String &x) {
    boyut = x.boyut;
    metin = new char[boyut + 1];
    strcpy(metin, x.metin);
    return *this;
  }

  void yaz() { std::cout << metin << std::endl; }
};

// Main
int main(int argc, char *argv[]) {
  String s1("Ornek metin");
  String s2 = "Merhaba"; /* Nasil calisisyor bilmiyorum (Normalde "Merhaba" yerine,
                            tanimladigimiz classin bir nesnesi olmasi gerekiyordu)*/
  String s3 = s1;

  s1.yaz();
  s2.yaz();
  s3.yaz();
}
