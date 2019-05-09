```c
/*
 * Konu: C ile Asal Sayılar
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Main
int main(int argc, char *argv[])
{
  int min = 1000;
  int max = 2000;

  int sayi = min;
  if(sayi < 2) sayi = 2;

  // Uzun sayilari virgulle otomatik  ayrimak icin
  setlocale(LC_NUMERIC, "");

  while(sayi < max)
  {
    int key = 0;
    for(int j = 2; j < sayi / 2; ++j) {
      if(sayi % j == 0) {
        key = 1;
        break;
      }
    }

    if(key == 0) printf("Asal: %'d\n", sayi);
    sayi++;
  }
}
```
