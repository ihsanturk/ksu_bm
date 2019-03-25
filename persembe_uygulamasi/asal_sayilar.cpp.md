```cpp
// Verilen iki deger arasindaki asal sayilari bulma
#include <iostream>

class asal {
public:
  int min;
  int max;
  int toplam;

  // Constructor fonksiyonu
  asal(int min_, int max_) {
    min = min_; // Verilen parametreleri classin icindeki degiskenlere atiyoruz.
    max = max_;
    toplam = 0;
  }

  void asal_bul() {
    if (min < 2) {
      min = 2;
    }

    for (int i = min; i < max; i++) {
      int asal_mi = 1;

      for (int j = 2; j < i; j++) {
        if (i % j == 0) {
          asal_mi = 0;
          break;
        }
      }

      if (asal_mi == 1) {
        std::cout << i << " ";
        toplam++;
      }
    }

    std::cout << "\nToplam: " << toplam << std::endl;
  }
};

int main() {
  asal a1(0, 50);
  a1.asal_bul();
  return 0;
}
```