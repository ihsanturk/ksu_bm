#include <iostream>

//Function Headers


//Main
int main(int argc, char* argv[])
{
	int* p;
    int x = 3;

    p = &x;

    std::cout << "p pointer degiskenin adresi: " << &p << std::endl;
    std::cout << "p pointer degiskenin icerigi: " << *p << std::endl;
    std::cout << "asil degiskenin adresi: " << &x << std::endl;
    std::cout << "asil degiskenin icerigi: " << x << std::endl;
}


//Functions

