# include <stdio.h>
int main(){
	float ortalama=0;
	int i=0, n=0, maksimum=0, toplam=0, sayi=0;

	printf("Kac tane sayi gireceksiniz: ");
	scanf("%d",&n);

	while(i < n){
		printf("%d. sayiyi giriniz: ", i+1);
		scanf("%d", &sayi);
		toplam += sayi;
		if (i == 0) maksimum = sayi;
		if (maksimum < sayi) maksimum = sayi;
		i++;
	}
	ortalama = (float)toplam/n;
	printf("\n");
	printf("Sayilarin en buyugu: %d\n", maksimum);
	printf("Sayilarin toplami  : %d\n", toplam);
	printf("Sayilarin ortlamasi: %.2f\n", ortalama);
}
