```cpp
#include <iostream>

//Classes
class Temel {
public:
  int boyut = 5;
  char karakter[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
  int  frekans[5]  =  {3,   2,   1,   2,   3};

  void Yazdir() {
    for(int i = 0; i < boyut; i++) {
      std::cout << karakter[i];
    }
    std::cout << "\n";
    for(int i = 0; i < boyut; i++) {
      std::cout << frekans[i];
    }
  }
};

class Alt : public Temel {
public:
  void metinAc() {
    for(int i = 0; i < boyut; i++) {
      for(int j = 0; j < frekans[i]; j++) {
        std::cout << karakter[i];
      }
    }
  }
};

//Main
int main(int argc, char *argv[]) {
  Alt alt_nesne;

  alt_nesne.metinAc();
}
```
