# include <stdio.h>
int main() {
	/*
	 * Dongunun icine "continue" koyulursa o noktadan sonraki kodlari es gecerek donguyu diger 
	 * asamasina gecirir.
	 */
	printf("Continue Ornegi\n\n");
	int i;
	for (i=0; i < 10; i++){
		if(i % 2 == 0) continue;
		printf("%d sayisinin 2'ye bolumunden kalan 0 degildir.\n",i);
	}

	/*
	 * Dongunun icine "break" koyulursa o noktadan sonraki kodlari calistirmaz ve donguyu 
	 * sonlandirir.
	 */
	printf("\n\nBreak Ornegi\n\n");
	i=1;
	for (i; i < 10; i++){
		if(i % 5 == 0) break;
		printf("%d sayisinin 5'e bolumunden kalan 0 degildir.\n", i);
	}
}
