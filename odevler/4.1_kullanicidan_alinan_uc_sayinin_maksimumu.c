# include <stdio.h>
int main(){
	int i=1, maksimum, sayi;

	while(i < 4){
		printf("%d. sayiyi giriniz: ", i);
		scanf("%d", &sayi);
		
		if (i == 1) maksimum = sayi;
		if (maksimum < sayi) maksimum = sayi;
		i++;
	}
	printf("\nEn buyuk sayi: %d.\n\n", maksimum);
	
}
