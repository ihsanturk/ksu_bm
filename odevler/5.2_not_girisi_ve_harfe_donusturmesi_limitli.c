# include <stdio.h>
int main() {
	int limit=0, not_=0;

	do{
		printf("Notunuzu giriniz: ");
		scanf("%d", &not_);
				
		limit++;

		if (limit > 0 && (not_ < 0 || not_ > 100)) {
			if (limit == 3) {
				printf("%d kere yanlis girdiniz. Programdan cikiliyor.\n", limit);
				break;
			}

			printf("%d kere yanlis girdiniz. Tekrar deneyiniz.\n\n", limit);
		}

	}while(limit < 3 && (not_ < 0 || not_ > 100));
	
	if (not_ < 50) printf("%d notu FF'e karsilik gelir.\n", not_);
	else if (not_ < 60) printf("%d notu CC'ye karsilik gelir.\n", not_);
	else if (not_ < 80) printf("%d notu BB'ye karsilik gelir.\n", not_);
	else printf("%d notu AA'ya karsilik gelir.\n", not_);

}
