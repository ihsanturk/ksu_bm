#include <iostream>

//Function Headers
void diziyi_degistir(int *input_dizi, int degistirilecek_index, int yeni_deger);


//Main
int main(int argc, char* argv[])
{
    int x = 3;
	int* p;

    p = &x;

    int dizi[3] = {1, 2, 3};
    int* d;

    d = &dizi[1];

    std::cout << "p pointer degiskenin adresi: "  << &p << std::endl;
    std::cout << "p pointer degiskenin icerigi: " << *p << "\n" << std::endl;
    std::cout << "asil degiskenin adresi: "       << &x << std::endl;
    std::cout << "asil degiskenin icerigi: "      << x  << "\n\n" << std::endl;

    std::cout << "d pointerinin adresi: "        << &d      << std::endl;
    std::cout << "d pointerinin icerigi: "       << *d      << "\n" << std::endl;
    std::cout << "dizi degiskenin adresi: "      << &dizi   << std::endl;
    std::cout << "dizi degiskenin 1. elemani: " << dizi[1] << std::endl;

    diziyi_degistir(dizi, 2, 61);
    std::cout << "dizi degiskenin 1. elemaninin yeni hali: " << dizi[1] << std::endl;
}


//Functions
void diziyi_degistir(int *input_dizi, int degistirilecek_index, int yeni_deger)
{
    *input_dizi[degistirilecek_index] = yeni_deger;
}
