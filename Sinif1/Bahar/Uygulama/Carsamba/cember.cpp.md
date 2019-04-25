```cpp
/*
 * Konu: Çember Sınıfı
 */

#include <iostream>
#include <cmath>


//Classes
class Cember
{
  public:
    float r;

    void duzenle(float r_)
    {
      if(r_ <= 0)
        std::cerr << "Cevre 0'a esit veya kucuk olamaz.";
      else
        r = r_;
    }

    float cevre()
    {
      return (2*M_PI*r);
    }

    float alan()
    {
      return (M_PI*r*r);
    }

    void yaz()
    {
      std::cout << r;
    }
};


//Main
int main(int argc, char* argv[])
{
  float cevre_;
  float alan_;
  Cember c1;

  c1.duzenle(5);

  std::cout << "Yaricap: "; c1.yaz(); std::cout << std::endl;
  cevre_ = c1.cevre();
  alan_ = c1.alan();

  std::cout << "\nCevre: " << cevre_ << std::endl;
  std::cout << "Alan: " << alan_ << std::endl;
}
```
