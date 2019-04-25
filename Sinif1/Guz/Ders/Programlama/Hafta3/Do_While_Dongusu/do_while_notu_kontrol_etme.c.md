```c
/*
 * Konu: Do While Not Kontrolü
 * Tarih: 2018.10.26
 */

# include <stdio.h>
int main() {
  int not_;
  do{
    printf("Notunuzu giriniz: ");
    scanf("%d", &not_);
    if (not_ < 0 || not_ > 100)
      printf("\nNot gecersiz.\n");

  }while(not_ < 0 || not_ > 100);

  printf("\nNotunuz gecerli.\n");
}
```
