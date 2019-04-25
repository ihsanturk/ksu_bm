```c
/*
 * Konu: Dizi
 * Tarih: 2018.12.14
 */

#include <stdio.h>
#define boyut 10

//Main
int main()
{
	int dizi[boyut] = {0};

	for (int i=0; i<10; i++)
	{
		printf("Bir sayi girin: ");
		scanf("%d", &dizi[i]);
	}
	for (int i=0; i<boyut; i++)
	{
		printf("%d\n", dizi[i]);
	}
}
```
