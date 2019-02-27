#include <iostream>
#include <cmath>

class Nokta
{
    public: 
        float x, y, xAL, xUL, yAL, yUL; 
    public: 
        void yaz()
        {
            std::cout << "[" << x << ", " << y << "]";
        }
    public: 
        void duzenle(float yeni_x, float yeni_y)
        {
            x = yeni_x;
            y = yeni_y;
        }
    public: 
        bool orjinde_mi()
        {
            if(x == 0 && y == 0)
            {
                return 1;
            } else {
                return 0;
            }
        }
    public: 
        float mesafe(Nokta n)
        {
            return abs(sqrt((x - n.x)*(x - n.x))+sqrt((y - n.y)*(y - n.y)));
        }
};

//Main
int main(int argc, char* argv[])
{
	Nokta n1, Nokta n2;

    n1.duzenle(1, 2);
    n2.duzenle(9, 2);

    if(n1.orjinde_mi())
    {
        n1.yaz();
        std::cout << " Orjinde." << std::endl;
    } else {
        n1.yaz();
        std::cout << " Orijinde degil." << std::endl;
    }

    n1.yaz(); std::cout << "<--->"; n2.yaz();
    std::cout << "\nAradaki mesafe: " << n1.mesafe(n2) << std::endl;

    return 0;
}
