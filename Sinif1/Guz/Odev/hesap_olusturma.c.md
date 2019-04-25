```c
/*
 * Konu: Hesap Oluştur
 */

/* Kullanici adi sadece harflerden olusabilir
 * Kullanici adi minimum 5 harften olusacak
 * Sifre harf rakam karisik olacak
 * Sifre minimum 7 karakter olacak
 * Kullanicinin adini ve sifresini alarak dogrulugunu kontrol et
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
  char ka[30],
       s[30];

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
    while(ka[k_boyut] != '\0')
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

    //Boyut sayimi
    s_boyut = 0;
    while(s[s_boyut] != '\0')
    {
      ++s_boyut;
    }

    //Sayi disindaki karakterlerin kontrolu
    karakter_var = 0;
    for (int i = 0; i < s_boyut; i++)
    {
      if (!isalnum(s[i])) karakter_var = 1;
    }
  }while(s_boyut < 7 || karakter_var == 1);



  char username[30],
     password[30];

  printf("\nKullnici adiniz: ");
  gets(username);
  printf("Sifre adiniz: ");
  gets(password);

  int i = 0;

  while(i < 30)
  {
    printf("i    : %d\n\n", i);
    printf("kosul: %d", ka[i] == username[i]);
    if (ka[i] == username[i])// && s[i] == password[i])
    {
      ++i;
      continue;
    }else {
      printf("\nYanlis kapi.\n");
      break;
    }
    printf("\nHosgeldiniz %s.\n", username);
    printf("%d", i);
  }
}
```
