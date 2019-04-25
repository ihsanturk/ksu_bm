```c
/*
 * Konu: For Döngüsü Maksimum Sayıyı Bul
 * Tarih: 2018.10.26
 */

# include <stdio.h>
int main() {
	int i=0, n=0, maksimum=0, sayi=0;
	printf("Kac sayi gireceksin: ");
	scanf("%d", &n);

	for (i=0; i < n; i++){
		printf("%d. sayiyi giriniz: ", i+1);
		scanf("%d",&sayi);

		if (i == 0) maksimum = sayi;
		if (maksimum < sayi) maksimum = sayi;
	}	

	printf("\nGirdikleriniz arasinda maksimum sayi: %d\n", maksimum);
}
```
