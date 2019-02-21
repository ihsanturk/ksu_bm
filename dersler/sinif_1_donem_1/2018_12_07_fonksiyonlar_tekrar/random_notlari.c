# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
	int x;
//	srand(5000); // Random baslangic noktasini belirliyoruz 

//	printf("%d\n", x); x = rand(); // Random sayiyi belirliyoruz

	printf("Rastgele sayi: %ld\n", time(NULL)); //Bios'ta ayarli ilk tarihten bugune kadar gecen zaman. (Genelde 1 Ocak 1970'ten su ana kadar olan sure)

//	srand(time(NULL)); //bios baslangic saatinden bu gune kadar gecen zamani random fonksiyonunun baslangic noktasi olarak belirliyoruz. Boylece her saniyede baslangic noktasi degismis olur.

//	x = rand();
//	printf("%d\n", x);
}
