```c
#include <stdio.h>

//Main
int main()
{
	char karakter_dizisi[] = {'M', 'e', 'r', 'h', 'a', 'b', 'a', '\0'};
	printf("%s", karakter_dizisi);

	char isim[30];
	printf("Adiniz: ");
	
	//scanf("%s", &isim);

	gets(isim);
	printf("Hosgeldiniz %s", isim);

}
```