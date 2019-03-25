```c
#include <stdio.h>
#define boyut 10

//Prototipler
void print_dizi(int x[], int b);

//Main
int main()
{
	int dizi[boyut] = {0};

	dizi_al(dizi, boyut);
	print_dizi(dizi, boyut); // Referans ile cagirma islemi.
}

//Fonksiyonlar
void dizi_al(int x[], int b)
{
	for (int i = 0; i < b; i++)
	{
		printf("dizi[%d] degerini gir: ", i);
		scanf("%d", &x[i]);
		
	}
}

void print_dizi(int x[], int b)
{
	for (int i = 0; i < b; i++)
	{
		printf("%d\n", x[i]);
	}
}
```