#include <stdio.h>
#include <ctype.h>

//Prototipler


//Main
int main()
{
	char tc[100],
	     *p;
	int karakter_sayisi = 0;
	
	printf("TC kimlik numarasi: ");
	scanf("%s", tc);

	p = tc;
	
	while(*p != '\0')
	{
		if (!isdigit(*p))
		{
			printf("Sadece rakam kullaniniz!\n");
			break;
		}	
		++karakter_sayisi;
		++p;
	}

	if (karakter_sayisi != 11)
	{
		printf("TC kimlik numarasi 11 haneli olmali.\n");
		return 0;
	}
	else if (tc[11] % 2 == 1) printf("TC son hanesi cift degil!\n");
	else printf("\nTC: %s\n", tc);
}

//Fonksiyonlar
