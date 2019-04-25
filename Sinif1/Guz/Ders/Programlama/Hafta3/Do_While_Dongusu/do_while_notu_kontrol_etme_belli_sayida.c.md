```c
/*
 * Konu: Do While İle Limit Koy
 * Tarih: 2018.10.26
 */

# include <stdio.h>
int main() {
	int not_, limit=0;
	do {
		printf("Notunuzu giriniz: ");
		scanf("%d", &not_);

		if (limit >= 3) {
			printf("\nHata:\n3 Kere yanlis girdiniz. Programdan cikiliyor.\n");

		}else if (limit < 3 && not_ >= 0 && not_ <= 100){
			printf("\nNotunuz gecerli.\n");

		}else if (not_ < 0 || not_ > 100){
			printf("\nNot gecersiz. ");
		}

		limit++;

	}while(limit < 3 && (not_ < 0 || not_ > 100));

}
```
