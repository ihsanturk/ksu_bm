```c
#include <stdio.h>
int main(){
	float x, y, sum;
	printf("\nLutfen bir sayi giriniz: ");
	scanf("%f",&x);

	printf("\nBir sayi daha giriniz: ");
	scanf("%f",&y);

	sum = x + y;
	printf("\nSayilarin toplami: %.3f\n\n",sum);
}
```