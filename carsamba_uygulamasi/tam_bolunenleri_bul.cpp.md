```cpp
#include <iostream>
#include <cmath>

//Classes
class Matematik
{
    public: 
        int x;
        int min;
        int max;

        Matematik(int min_, int max_, int x_)
        {
            min = min_;
            max = max_;
            x = x_;
        }

        int bolunenleri_bul()
        {
            int bolunen_sayisi = 0;

            for(int i = min; i < max; i += x)
            {
                std::cout << i << " ";
                bolunen_sayisi++;
            }
            return bolunen_sayisi;
        }
};


//Main
int main(int argc, char* argv[])
{
    Matematik islem(0, 500, 17);
    std::cout << "Bolunenler:\n";
    int sonuc = islem.bolunenleri_bul();
    std::cout << "\n\n" << islem.min << " - " << islem.max << " arasinda " << islem.x << " sayisina tam bolunen " << sonuc << " tane sayi var." << std::endl;
}
```