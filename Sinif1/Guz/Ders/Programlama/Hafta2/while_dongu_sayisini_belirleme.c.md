```c
/*
 * Konu: While İle Tek Çift Belirle
 * Tarih: 2018.10.19
 */

# include <stdio.h>
int main(){
  int c=0, n, sayi, kontrol;
    printf("Dongu kac kere donsun: ");
    scanf("%d",&n);

    while(c < n){
      printf("\nBir sayi giriniz: ");
      scanf("%d",&sayi);

      kontrol = sayi % 2;
      if (kontrol == 0) printf("%d sayisi cifttir.\n", sayi);
      else printf("%d sayisi tektir.\n", sayi);
      c++;
  }
}
```
