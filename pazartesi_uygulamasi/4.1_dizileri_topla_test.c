#include <stdio.h>

//Prototipler
void pozitif_dizi_al(int pozitif_dizi[]);
void negatif_dizi_al(int negatif_dizi[]);
int *iki_diziyi_topla(int pozitif_dizi[], int negatif_dizi[]);
void diziyi_ekrana_bas();


//Main
int main()
{
	int boyut = 5;
	int pozitif_dizi[5] = {0};
	int negatif_dizi[5] = {0};
	int *p;

	pozitif_dizi_al(pozitif_dizi);
	negatif_dizi_al(negatif_dizi);
	p = iki_diziyi_topla(pozitif_dizi, negatif_dizi);

	//diziyi_ekrana_bas(iki_diziyi_topla(pozitif_dizi, negatif_dizi, toplam_dizi), boyut);
	diziyi_ekrana_bas(p, boyut);
}


//Fonksiyonlar
void pozitif_dizi_al(int pozitif_dizi[])
{
	int sayi = 0,
	    i = 0;

	do{
		printf("Pozitif sayi giriniz: ");
		scanf("%d", &sayi);

		pozitif_dizi[i] = sayi;
		i++;
	}while(sayi >= 0);
}

void negatif_dizi_al(int negatif_dizi[])
{
	int sayi = 0,
	    i = 0;

	do{
		printf("Negatif sayi giriniz: ");
		scanf("%d", &sayi);

		negatif_dizi[i] = sayi;
		i++;
	}while(sayi <= 0);
}

int *iki_diziyi_topla(int *pozitif_dizi, int *negatif_dizi)
{
	int boyut = 5,
	    toplam_dizi[5] = {0};

	for (int i = 0; i < boyut; i++)
	{
	//	printf("|\n");
		toplam_dizi[i] = pozitif_dizi[i] + negatif_dizi[i];
	//	printf("%d. toplam: %d", i, toplam_dizi[i]);
	}

	//diziyi_ekrana_bas(toplam_dizi, boyut);
	return toplam_dizi;
}

void diziyi_ekrana_bas(int dizi[], int boyut)
{
	printf("Dizi:\n");
	for(int i = 0; i < boyut; i++)
	{
		printf("%d\n", dizi[i]);
	}
}
