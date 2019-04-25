```c
/*
 * Konu: Faktöriyel Fonksiyonu
 * Tarih: 2018.11.09
 */

# include <stdio.h>
int faktoriyel(int sayi){
  int i=0, faktoriyel_degeri=1;
  if (sayi < 0) {
    printf("Negatif sayilarin faktoriyel degeri olmaz.\n");
    return 0;

  }else if (sayi != 0){
    while(i < sayi) {
      i++;
      faktoriyel_degeri *= i;
    }
  }
  return faktoriyel_degeri;
}

int main() {
  int sayi, f_degeri;
  printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz: ");
  scanf("%d",&sayi);

  f_degeri = faktoriyel(sayi);
  printf("%d! = %d\n", sayi, f_degeri);
}
```
