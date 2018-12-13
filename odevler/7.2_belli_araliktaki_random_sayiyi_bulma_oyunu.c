#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int rastgele_sayi, kullanicinin_tahmini, deneme_sayisi = 0;

	srand(time(NULL)); //Random sayi olusturma fonksiyonunun baslangicini degistiriyoruz.
	rastgele_sayi = 1 + rand() % 100; 
	
	printf("Bilgisayar aklindan 1-100 arasinda bir sayi tuttu.\n");

	do{
		printf("Tahmininiz: ");
		scanf("%d", &kullanicinin_tahmini);

		++deneme_sayisi;

		if (kullanicinin_tahmini == rastgele_sayi)     printf("\nTerbrikler, sayiyi %d. denemede buldunuz!\n", deneme_sayisi);
		else if (kullanicinin_tahmini < rastgele_sayi) printf("Daha buyuk ^ ");
		else if (kullanicinin_tahmini > rastgele_sayi) printf("Daha kucuk v ");

	}while(kullanicinin_tahmini != rastgele_sayi);
}
