#include <stdio.h>
int main(){
//	int x, y, r;
//	x = 5;
//	y = 2;
//	r = x % y;
//	printf("\n%d\n\n",r);	
//
//	int x, odd_or_even;
//	printf("\n\nSayinin isaretini ve teklik ciftlik durumunu kontrol et: ");
//	scanf("%d",&x);
//
//	odd_or_even = x % 2;
//
//	if(x < 0) { 
//		printf("\nNegatiftir ve ");
//
//		if(odd_or_even == 0) {printf("cittir.\n\n\n");}
//		else {printf("tektir.\n\n\n");}
//	}
//
//	else { 
//		printf("\nPozitiftir ve ");
//
//		if(odd_or_even == 0) {printf("cittir.\n\n\n");}
//		else {printf("tektir.\n\n\n");}
//	}

	int not_;
	printf("\nNotunuzu giriniz: ");
	scanf("%d",&not_); 

	if (not_ <= 100 && not_ >= 0) {
//		if(not_ < 50) printf("\nFF\n\n");
//		if(not_ > 50 && not_ <= 60 ) printf("\nCC\n\n");
//		if(not_ > 60 && not_ <= 80 ) printf("\nBB\n\n");
//		if(not_ > 80) printf("\nAA\n\n");
//
		if(not_ < 50) printf("\nFF\n\n");
		else if(not_ < 60) printf("\nCC\n\n");
		else if(not_ < 80) printf("\nBB\n\n");
		else  printf("\nAA\n\n");
	}

	else printf("\nGECERSIZ not girildi.\n\n");
}
