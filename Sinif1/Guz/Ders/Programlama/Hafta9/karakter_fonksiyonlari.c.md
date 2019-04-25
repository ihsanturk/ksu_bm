```c
/*
 * Konu: Karakter Kontrol Fonksiyonları
 * Tarih: 2018.12.21
 */

#include <stdio.h>
#include <ctype.h>

//Prototipler

//Main
int main()
{
	int cevap;

	cevap = isdigit('5'); //Sayi olup olmadigini kontrol et
	cevap = isalpha('a'); //Harf olup olmadigini kontrol et
	cevap = isalnum('1'); //Sayi veya harf olup olmadigini kontrol et
	cevap = isxdigit('f'); //Hex veya harf olup olmadigini kontrol et
	cevap = isupper('A'); //Buyuk harf olup olmadigini kontrol et
	cevap = islower('a'); //Kucuk harf olup olmadigini kontrol et
	cevap = toupper('a'); //Buyuk harfe donustur //char tipinde deger verir
	cevap = tolower('A'); //Kucuk harfe donustur //char tipinde deger verir
	printf("%c", cevap);
}

//Fonksiyonlar
```
