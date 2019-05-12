```cpp
/*
 * Konu: Header Dosyasına Ait Cpp Dosyası
 */

#include "opt.h"

int
opt::topla(int x, int y)
{
  toplam = x + y;
  return toplam;
}
int
opt::topla(int x, int y, int z)
{
  toplam = x + y + z;
  return toplam;
}
int
opt::topla(int w, int x, int y, int z)
{
  toplam = w + x + y + z;
  return toplam;
}
```
