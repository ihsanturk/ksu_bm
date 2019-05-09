```cpp
/*
 * Konu: Çok Biçimlilik, Header Dosyaları
 * Tarih: 09.05.2019
 */

//#include <iostream>
#include "opt.h"

int
main(int argc, char *argv[])
{
  opt nesnem;
  int a;
  int b;
  int c;
  int d;

  std::cout << "a: "; std::cin >> a;
  std::cout << "b: "; std::cin >> b;
  std::cout << "c: "; std::cin >> c;
  std::cout << "d: "; std::cin >> d;

  std::cout << nesnem.topla(a, b)       << std::endl;
  std::cout << nesnem.topla(a, b, c)    << std::endl;
  std::cout << nesnem.topla(a, b, c, d) << std::endl;
}
```
