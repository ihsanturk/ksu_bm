```c
#include <stdio.h>
#include <ctype.h>

//Prototipler


//Main
int main()
{
	char ka[50],
	     *p;
	int harf_sayisi = 0;
	
	printf("(En az 6 karakter) Kullanici adi: ");
	scanf("%s", ka);

	p = ka;
	
	while(*p != '\0')
	{
		if (!isalpha(*p))
		{
			printf("Sadece harf kullaniniz!\n");
			break;
		}	
		++harf_sayisi;
		++p;
	}

	if (harf_sayisi < 6)
	{
		printf("En az 6 karakter giriniz!");
	}
	else printf("\nKullanici adiniz: %s\n", ka);
}

//Fonksiyonlar
```