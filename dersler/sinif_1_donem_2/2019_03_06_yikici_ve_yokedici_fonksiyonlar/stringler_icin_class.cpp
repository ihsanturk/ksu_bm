#include <iostream>
#include <cstring>

//Classes
class String
{
    int boyut;
    char* metin;

    public:
        String(const char* veri)
        {
            boyut = strlen(veri);
            metin = new char[boyut + 1];
            strcpy(metin, veri);
        }

        void yaz()
        {
            std::cout << metin << std::endl;
        }
};


//Main
int main(int argc, char* argv[])
{
    String isim("Hasan");
    isim.yaz();

	return 0;
}
