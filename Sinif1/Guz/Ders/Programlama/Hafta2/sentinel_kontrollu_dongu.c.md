```c
/*
 * Konu: Sentinel Kontrollü Döngü
 * Tarih: 2018.10.19
 */

# include <stdio.h>
int main() {
	// Sentinel Kontrollu Dongu //
	
	int a=0, not_sayisi, not_;
	float ortalama, toplam;

	printf("Kac not gireceksiniz: ");
	scanf("%d", &not_sayisi);

	while(a < not_sayisi) {
		printf("Notunuzu giriniz: ");
		scanf("%d",&not_);
		while(0 > not_ || not_ > 100){
			printf("\n%d gecersiz bir nottur. ", not_);
			printf("Notunuzu dogru giriniz: ");
			scanf("%d",&not_);
		}
		toplam += not_;
		a++;
	}
	ortalama = (float)toplam/(float)not_sayisi;

	if (not_sayisi == 1) printf("\nNotunuz %.2f\n\n", ortalama);
	else 		     printf("\nNotlarin ortalamasi: %.2f\n\n", ortalama); 

}
```
