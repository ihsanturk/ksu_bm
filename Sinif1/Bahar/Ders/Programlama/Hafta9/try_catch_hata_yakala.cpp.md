```cpp
/*
 * Konu: Try, Catch
 * Tarih: 09.05.2019
 */

#include <iostream>

int
main(int argc, char *argv[])
{
  int s1 = 0;
  int s2 = 0;
  try
  {
  std::cout << "Bir sayi giriniz: ";      std::cin >> s1;
  std::cout << "Bir sayi daha giriniz: "; std::cin >> s2;

  if(s2 == 0)
  {
    throw 1;
  } else {
    std::cout << s1 << " / " << s2 << " = " << s1 / s2 << std::endl;
  }

  }
  catch(int x)
  {
    std::cout << "0'a bolunemez" << std::endl;
  }
}
```
