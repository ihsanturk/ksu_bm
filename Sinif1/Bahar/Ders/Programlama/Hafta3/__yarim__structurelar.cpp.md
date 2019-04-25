```cpp
/*
 * Konu: Structure
 * Tarih: 2019.02.20
 */

// Bu dosya yarimdir.

#include <iostream>

//Structures
typedef struct
{
  char cinsiyet;
  char ad[30];
  char soyad[30];
  int yas;
} yolcu;

//Main
int main(int argc, char* argv[])
{
  yolcu y1;

  y1.cinsiyet = 'e';
  y1.ad = "Hasan";
  y1.soyad = "Badem";
  y1.yas = 1;
}
```
