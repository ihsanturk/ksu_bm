// Verilen iki deger arasindaki asal sayilari bulan program

#include<iostream>
 
using namespace std;
 
class prime {
public:
  void asal_bul(int min_, int max_) {
    int toplam = 0;

    for(int i = min_; i < max_; i++) {
      int anahtar = 1;
      for(int j = 2; j < i; j++) {
        if(i % j == 0) {
          anahtar = 0;
          break;
        }
      }
      if (anahtar != 0) {
        std::cout << i << " " << std::endl;
        toplam++;
      }
    }
    std::cout << "Toplam: " << toplam << std::endl;
  }
}; 
int main()
{
    prime sayilar;
    sayilar.asal_bul(0, 10);
    return 0;
}
