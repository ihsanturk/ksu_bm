#include <stdio.h>
#define adet 10

int main()
{
	int dizi[adet] = {22,1,65,34,76,2,5,10,87,65}, maksimum = 0;

	for (int i; i < adet; i++)
	{
		if (maksimum <= dizi[i]) maksimum = dizi[i];
	}
	printf("Dizideki en buyuk sayi = %d\n", maksimum);

}
