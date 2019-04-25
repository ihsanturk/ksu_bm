```c
/*
 * Konu: Pointer Tanımla
 * Tarih: 2018.12.21
 */

#include <stdio.h>

int main()
{
	int x = 9, *p;    // Tam sayi tipinde x ve tam sayi pointer tipinde p.
  p = &x;           // p x'in adresine esittir.

  printf("%d", *p); // p pointerinin isaret ettigi degeri bastir.
}
```
