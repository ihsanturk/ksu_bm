#include <stdio.h>
int main(){
	int s1, s2, s3, carpim_sonucu;

	printf("Carpmak istediginiz 3 sayiyi aralarina bosluk koyarak giriniz: ");
	scanf("%d %d %d", &s1, &s2, &s3);

	carpim_sonucu = s1*s2*s3;
	printf("\nSonuc: %d\n", carpim_sonucu);
}
