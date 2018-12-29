/* Kullanici adi sadece harflerden olusabilir
 * Kullanici adi minimum 5 harften olusacak
 * Sifre harf rakam karisik olacak
 * Sifre minimum 7 karakter olacak
 * Kullanicinin adini ve sifresini alarak dogrulugunu kontrol et
*/
#include <stdio.h>
#include <ctype.h>

/*
void *dizi_olustur(char dizi[], int boyut, char karakter)
{
	char *dizi[boyut] = {0};

	for(int i = 0; i < boyut; i++)
	{
		*dizi[i] = karakter;
	}
}
*/

int main()
{
	char ka[30] = {0},
	     s[30] = {';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';', ';'};

        int k_boyut = 0,
	    s_boyut = 0,
	    sayi_var = 0,
	    karakter_var = 0;

	//Kullanici Adi 
	do{
		//Kullanici adi alimi
		printf("Kullanici adi giriniz: ");
		gets(ka);


		//Boyut sayimi
		k_boyut = 0;
		while(ka[k_boyut] != 0)
		{
			++k_boyut;
		}
		
		//Sayi kontrolu
		sayi_var = 0;
		for (int i = 0; i < k_boyut; i++)
		{
			if (isalpha(ka[i]) == 0) sayi_var = 1;
		}
	}while(k_boyut < 5 || sayi_var == 1);
	
	//Sifre
	do{
		//Sifre alimi
		printf("Sifre giriniz: ");
		gets(s);

/*
		//Boyut sayimi
		s_boyut = 0;
		while(s[s_boyut] != 0)
		{
			++s_boyut;
		}
		*/

		//Boyut sayimi
		s_boyut = 0;
		for(int i = 0; i < 30; i++)
		{
			if (isalnum(s[i]) != 0)
			{	
				s_boyut = 0;
				break;
			}
			else
				s_boyut++;
		}
		/*
		//Sayi disindaki karakterlerin kontrolu
		karakter_var = 0;
		for (int i = 0; i < s_boyut; i++)
		{
			if (isalnum(s[i]) != 0) karakter_var = 1;
		}
		*/
	}while(s_boyut < 7);// || karakter_var == 1);


}
