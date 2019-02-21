#include <stdio.h>

//Prototipler
void kup_al_degerle(int x);
void kup_al_referansla(int *x);

//Main
int main()
{
	int a = 4;
	kup_al_degerle(a);
	kup_al_referansla(&a);
}

//Fonksiyonlar
void kup_al_degerle(int x)
{
	x = x*x*x; 
	printf("Degerle: %d\n", x);
}

void kup_al_referansla(int *x)
{
	*x = *x * *x * *x; 
	printf("Referansla: %d\n", *x);
}
