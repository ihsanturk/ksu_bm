#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Prototipler

int zar_at();


//Main

int main()
{
	int zar1, zar2, tekrar=10, cift_gelen_sayisi=0;
	float olasilik;

	srand(time(NULL));

	tekrar = 1 000 000 000;

	for (int i=1; i < tekrar; i++)
	{
		zar1 = zar_at();
		zar2 = zar_at();
		if (zar1 == zar2)
			++cift_gelen_sayisi;
	}

	olasilik = 100 * ((float)cift_gelen_sayisi / (float)tekrar);
	printf("Atilan zar sayisi: %d\nKac kere cift geldi: %d\nIkisinin de ayni gelme olasiligi: %.6f%%\n", tekrar, cift_gelen_sayisi, olasilik);
}


//Fonksiyonlar

int zar_at()
{
	int zar = 1 + rand() % 6;
	return zar;
}
