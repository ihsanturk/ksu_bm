# include <stdio.h>
int main() {
	int i=0, sayi=0, faktoriyel_degeri=1;

	printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);

	if (sayi < 0) {
		printf("Negatif sayilarin faktoriyel degeri olmaz.\n");
		return 0;

	}else if (sayi != 0){
		while(i < sayi) {
			i++;
			faktoriyel_degeri *= i;
		}
	}	
	printf("%d! = %d", sayi, faktoriyel_degeri);
	printf("\n");

}
