#include <iostream>
#include <string.h>

//Main
int main(int argc, char* argv[])
{
    char sifre[10] = "ogr12345";
    char giris[10];

    std::cout << "Sifre: ";
    std::cin >> giris;
    int sonuc = strcmp(sifre, giris);
    if(sonuc == 0)
    {
        std::cout << "Basarili." << std::endl;
    } else {
        std::cout << "Sifre yanlis." << std::endl;
    }
}
