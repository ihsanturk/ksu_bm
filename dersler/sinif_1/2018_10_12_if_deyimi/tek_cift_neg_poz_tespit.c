#include <stdio.h>
int main() {
   	int x, tek_cift;
        printf("\n\nSayinin isaretini ve teklik ciftlik durumunu kontrol et: ");
        scanf("%d",&x);

        tek_cift = x % 2;

        if(x < 0) {
                printf("\nNegatiftir ve ");

                if(tek_cift == 0) {printf("cittir.\n\n");}
                else {printf("tektir.\n\n");}
        }

        else {
                printf("\nPozitiftir ve ");

                if(tek_cift == 0) {printf("cittir.\n\n");}
                else {printf("tektir.\n\n");}
        }
}
