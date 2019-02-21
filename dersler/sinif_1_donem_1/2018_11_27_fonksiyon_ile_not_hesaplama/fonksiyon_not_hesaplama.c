#include <stdio.h>

// FONKSIYON PROTOTIPLERI

float ortalama(float vize, float final);
char harfnot(float ort);


// MAIN FONKSIYONU

int main(){
	int i, x;
	float ort, vize, final;

	printf("Sınıf mevcudunu giriniz: ");
	scanf("%d", &x);

	printf("Vize notunu giriniz: ");
	scanf("%f", &vize);

	printf("Final notunu giriniz: ");
	scanf("%f", &final);

	ort = ortalama(vize, final);

	printf("\nHarf: %c\n", harfnot(ort));
}


// GEREKLI FONKSIYONLAR

float ortalama(float vize, float final){
	float ort;

        ort = (vize*0.4) + (final*0.6);
	printf("Ortalama: %f", ort);

	return ort;
}

char harfnot(float ort){
	char harf;

	if (0 < ort && ort <= 50)      harf = 'F';
	else if(50 < ort && ort <= 60) harf = 'D';
	else if(60 < ort && ort <= 70) harf = 'C';
	else if(70 < ort && ort <= 80) harf = 'B';
	else harf = 'A';

	return harf;
}


