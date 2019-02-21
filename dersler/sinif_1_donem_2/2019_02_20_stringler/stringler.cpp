#include <iostream>
#include <cstring>

//Main
int main(int argc, char* argv[])
{
	char isim[30] = "ornek_isim";
    std::cout << strcpy(isim, "ornek_soyisim") << std::endl;// isim = ornek_soyisim 
    std::cout << strcat(isim, "ornek_soyisim") << std::endl;// isim = ornek_isimornek_soyisim olur.
    std::cout << strcmp(isim, "ornek_soyisim") << std::endl;// iki parametre esitse 0 degilse 1 dondurur.
}
