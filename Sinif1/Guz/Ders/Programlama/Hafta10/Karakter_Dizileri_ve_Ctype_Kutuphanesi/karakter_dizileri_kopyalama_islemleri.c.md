```c
/*
 * Konu: Karakter Dizileri Kopyalama
 * Tarih: 2018.12.28
 */

#include <stdio.h>

int main()
{
  char *strcpy( char *s1, const char *s2 ); //Copies string s2 into array s1. The value of s1 is returned.
  char *strncpy( char *s1, const char *s2, size_t n ); //Copies at most n characters of string s2 into array s1. The value of s1 is returned.
  char *strcat( char *s1, const char *s2 ); // Appends string s2 to array s1. The first character of s2 overwrites
              // the terminating null character of s1. The value of s1 is returned.
  char *strncat( char *s1, const char *s2, size_t n ); // Appends at most n characters of string s2 to array s1. The first
                   // character of s2 overwrites the terminating null character of s1. The
                   // value of s1 is returned.
}
```
