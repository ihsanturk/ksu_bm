#include <stdio.h>

//Prototipler
int kac_basamakli(int sayi);

//Main
int main()
{
	int sayi, basamak_sayisi;

	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);

	basamak_sayisi = kac_basamakli(sayi);
	printf("Sayi %d basamakli.\n", basamak_sayisi);
	return 0;
}


//Fonksiyonlar
int kac_basamakli(int sayi)
{
	int basamak_sayisi=0, kalan=0;

	do{
		kalan = sayi % 10;
		sayi /= 10;
		basamak_sayisi++;
	}while(sayi != 0);

	return basamak_sayisi;
}

