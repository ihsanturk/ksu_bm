#include <stdio.h>

//vke = kilo / boyun karesi

//Fonksiyon Prototipleri

float vke_hesapla(float boy, int kilo);
const char * vke_aralik(float vke);

int main() {
	int kilo;
	float boy, vke;

	printf("Boy degerini giriniz: ");
	scanf("%f", &boy);

	printf("Kilo degerini giriniz: ");
	scanf("%d", &kilo);

	printf("%s\n", vke_aralik(vke_hesapla(boy, kilo)));
}

float vke_hesapla(float boy, int kilo) {
	if (boy > 5.0) boy = boy / 100;
	return (kilo / (boy*boy));
}

const char * vke_aralik(float vke) {
        if (vke <= 18.5) return "Cok zayif";
        else if (vke < 25) return "Normal";
        else if (vke < 30) return "Kilolu";
        else return "Obez";

}
