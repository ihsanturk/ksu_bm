# include <stdio.h>
void topla() {
	int s1, s2, sonuc;
	printf("Sayi giriniz: ");
	scanf("%d", &s1);

	printf("Sayi giriniz: ");
	scanf("%d", &s2);
	
	sonuc = s1 + s2;
	printf("%d\n", sonuc);
}

int toplam() {
	int s1, s2, sonuc;
	printf("Sayi giriniz: ");
	scanf("%d", &s1);

	printf("Sayi giriniz: ");
	scanf("%d", &s2);
	
	sonuc = s1 + s2;
	return sonuc;
}

void topla_yaz(int x, int y) {
	int sonuc;
	sonuc = x + y;
	printf("%d\n", sonuc);
}


int toplama(int x, int y) {
	int sonuc;
	sonuc = x + y;
	return sonuc;
}

int main () {
//	topla();

	int sayilarin_toplami;

//	sayilarin_toplami = toplam();
//	printf("%d", sayilarin_toplami);

//	sayilarin_toplami = toplama(96, 28); //96 ve 28 sayilarini topla "sayilarin_toplami" degiskenine esitle.
//	printf("%d\n", sayilarin_toplami);

	topla_yaz(toplam(),toplam());
}
