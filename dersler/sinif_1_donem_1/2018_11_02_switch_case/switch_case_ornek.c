# include <stdio.h>	
int main(){
	int x=0;

	printf("Bir sayi giriniz: ");
	scanf("%d", &x);
	
	switch(x){
		case 1:  printf("bir\n"); break;
		case 2:  printf("iki\n"); break;
		case 3:  printf("uc\n"); break;
		default: printf("bir, iki, veya uc degil.\n");
	}
}
