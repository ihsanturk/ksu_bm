```c
# include <stdio.h>
int main() {
	int s1=0, s2=0;
	char giris;

	printf("Sayilari aralarina bosluk koyarak giriniz: ");
	scanf("%d %d", &s1, &s2);

	printf("Islemler: \n\n");

	printf("[1] : Toplama\n");
	printf("[2] : Cikarma\n");
	printf("[3] : Carpma\n");
	printf("[4] : Bolme\n\n");
	
	printf("Seciminiz: ");
	scanf(" %c", &giris);

	switch(giris) {
		case '1': printf("Sonuc: %d\n", s1+s2); break;
		case '2': printf("Sonuc: %d\n", s1-s2); break;
		case '3': printf("Sonuc: %d\n", s1*s2); break;
		case '4': printf("Sonuc: %f\n", (float)s1/(float)s2); break;
		default:  printf("\nGecersiz secim.\n"); break;
	}
}
```