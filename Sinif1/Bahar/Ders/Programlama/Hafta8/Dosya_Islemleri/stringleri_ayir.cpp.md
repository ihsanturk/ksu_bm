```cpp
/*
 * Konu: Stringleri İçindeki Bir Karakterle Parçalara Ayır
 * Tarih: 2019.04.24
 */

#include <iostream>
#include <cstring>

//Main
int main(int argc, char *argv[]) {
	char metin[] = "merhaba, guzel, insan";
  char *p;
  p = strtok(metin, ", "); // Virgul ve bosluk ayrac olarak kullanildi
  while(p != NULL)
  {
    std::cout << p << std::endl;
    p = strtok(NULL, ", "); // Bir sonraki
  }
  return 0;
}
```
