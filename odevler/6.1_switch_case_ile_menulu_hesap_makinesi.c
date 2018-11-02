# include <stdio.h>
int main() {
	int s1=0, s2=0;
	char giris;

	while(giris != 'q'){
		printf("Sayilari aralarina bosluk koyarak giriniz: ");
		scanf("%d %d", &s1, &s2);

		if (giris != 'q') {
			printf("\nIslemler: \n\n");

			printf("[1] : Toplama\n");
			printf("[2] : Cikarma\n");
			printf("[3] : Carpma\n");
			printf("[4] : Bolme\n\n");

			printf("[q] : Cikis\n\n");
			printf("Seciminiz: ");
			scanf(" %c", &giris);
			/*Not: 
		 	Burada (yukarida) char degerini almak icin " %c" kodunu kullandik. 
			%'den onceki bosluk karakterine dikkat!    ^^^ 
			Bu bosluk karakteri olmazsa program bu scanf'i atliyor. 
			*/
		}	
		switch(giris) {
			case '1': printf("%d+%d = %d\n\n",s1,s2, s1+s2); break;
			case '2': printf("%d-%d = %d\n\n",s1,s2, s1-s2); break;
			case '3': printf("%dx%d = %d\n\n",s1,s2, s1*s2); break;
			case '4': printf("%d/%d = %.3f\n\n",s1,s2, (float)s1/(float)s2); break;

			case 'q': printf("Cikis yapiliyor...\n"); break;

			default:  printf("\nGecersiz secim.\n\n"); break;
		}

	}
}
