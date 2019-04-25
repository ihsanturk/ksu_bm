```c
/*
 * Konu: Minimum Sayıyı Bul
 * Tarih: 2018.12.07
 */

#include <stdio.h>

//Prototipler
int hangisi_kucuk(int x, int y);

//Main
int main(){
  int a, b, cevap;

  printf("Iki sayi giriniz: ");
  scanf("%d %d", &a, &b);

  cevap = hangisi_kucuk(a, b);

  if (cevap == 9999999999999) printf("Esit");
  else printf("%d\n", cevap);
}

//Fonksiyonlar
int hangisi_kucuk(int x, int y){
  if (x < y) return x;
  else if (x > y) return y;
  else return 4294967200;
}


```
