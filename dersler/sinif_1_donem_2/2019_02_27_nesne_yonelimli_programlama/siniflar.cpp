#include <iostream>

class Nokta
{
    public: int x, y, xAL, xUL, yAL, yUL; 
    public: void yaz()
        {
            std::cout << "Nokta: [" << x << ", " << y << "]" << std::endl;
        }
    public: void git(int yeni_x, int yeni_y)
        {
            x = yeni_x;
            y = yeni_y;
        }
};

//Main
int main(int argc, char* argv[])
{
	Nokta n1;

    n1.x = 1;
    n1.y = 2;
    n1.yaz();

    n1.git(6, 1);
    n1.yaz();

    return 0;
}
