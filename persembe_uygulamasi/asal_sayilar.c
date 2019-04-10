#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Main
int main(int argc, char *argv[]) {
  int min = 100;
  int max = 200;

  int sayi = min;
  if(sayi < 2) sayi = 2;

  // Uzun sayilari otomatik virgulle ayrimak icin
  setlocale(LC_NUMERIC, "");

  while(sayi < max) {     // "max"a kadar olan asal sayilari bul
//  while(1) {              // "min"den sonsuza kadar devam et
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
