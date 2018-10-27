#include <stdio.h>
int main(){
	int not_;

	printf("\nNotunuzu giriniz: ");
	scanf("%d",&not_); 

	if (not_ <= 100 && not_ >= 0) {
		if(not_ < 50) printf("\nFF\n\n");
		else if(not_ < 60) printf("\nCC\n\n");
		else if(not_ < 80) printf("\nBB\n\n");
		else  printf("\nAA\n\n");
	} else 
		printf("\nGECERSIZ not girildi.\n\n");
}
