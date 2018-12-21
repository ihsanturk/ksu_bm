#include <stdio.h>

int main()
{
	char isim[50], soyisim[50], numara[11];

	printf("Adiniz: ");
	gets(isim);
	
	printf("Soyadiniz: ");
	gets(soyisim);

	printf("Numaraniz: ");
	scanf("%s", numara);

	printf("Hosgeldiniz %s %s.\nNumaraniz: %s\n", isim, soyisim, numara);


}
