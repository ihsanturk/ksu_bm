#include <stdio.h>

//Prototipler
int *sondan_kucuk_elemanlar(int kac_tane, int dizi[], int adet);
int dizi_sirala(int dizi[], int adet);
void diziyi_ekrana_bas(int dizi[], int adet);


//Main
int main()
{
	int c = 0,
	    adet = 0,
	    sayi = 0,
	    son_girilen = 0,
	    dizi[100] = {0},
	    kucukler_dizi[3] = {0};

	do{
		printf("Bir sayi giriniz: ");
		scanf("%d", &sayi);
		if (sayi != 0)
		{
			dizi[adet] = sayi;
			++adet;
		}
	}while(sayi != 0);

	
	//Diziden kucuk 3 elemani dizi haline getir 
	kucukler_dizi = sondan_kucuk_elemanlar(c, dizi, adet);
	diziyi_ekrana_bas(kucukler_dizi, 3, adet);
}


//Fonksiyonlar
int *sondan_kucuk_elemanlar(int kac_tane, int *dizi, int adet)
{
	int kucukler_dizi[kac_tane] = {0};
	son_girilen = dizi[adet-1];

	for (int i = 0; i < adet; i++)
	{
		if (kac_tane < 3)
		{
			if (dizi[i] < son_girilen)
			{
				printf("%d\n", dizi[i]);
				kucukler_dizi[i] = dizi[i];

				kac_tane++;
			}
		}
	}
	return kucukler_dizi[];
}

//int dizi_sirala(int dizi[], int adet);


void diziyi_ekrana_bas(int dizi[], int kac_tane, int adet)
{
	for (int i = 0; i < adet; i++)
	{
		printf("%d\n", dizi[i]);
	}
}
