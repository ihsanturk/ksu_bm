```c
/*
 * Konu: Struct
 * Tarih: 2018.12.28
 */

#include <stdio.h>

// Structs
typedef struct ogrenci {
  int vize, final, ort;

  float ortalama;

  char ad[30], soyad[30], no[30];
} ogr;

// Prototipler
void ogrenci_yaz(ogr a);

// Main
int main() {
  ogr ali;

  ali.vize = 100;
  ogrenci_yaz(ali);
}

// Fonksiyonlar
void ogrenci_yaz(ogr a) {
  printf("Vize: %d\nFinal: %d", a.vize, a.final);
}
```
