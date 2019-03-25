```cpp
#include <iostream>
#include <cmath>

class Nokta
{
    public: 
        //xAL ---> koordinat duzleminin alt siniri
        float x, y, xAL, xUL, yAL, yUL; 


        void konum()
        {
            std::cout << "[" << x << ", " << y << "]";
        }

        void duzenle(float yeni_x, float yeni_y)
        {
            x = yeni_x;
            y = yeni_y;
        }

        bool orijinde_mi()
        {
            if(x == 0 && y == 0)
            {
                return 1;
            } else {
                return 0;
            }
        }

        float mesafe(Nokta n)
        {
            float msf = sqrt(abs((x - n.x) * (x - n.x)) + abs((y - n.y) * (y - n.y)));
            return msf;
        }
};

//Main
int main(int argc, char* argv[])
{
    //n1 ve n2 birer nesnedir.
	Nokta n1;
    Nokta n2; 

    n1.duzenle(3, 1);
    n2.duzenle(6, 18);

    if(n1.orijinde_mi())
    {
        n1.konum();
        std::cout << " Orjinde.\n" << std::endl;
    } else {
        n1.konum();
        std::cout << " Orijinde degil.\n" << std::endl;
    }

    n1.konum(); std::cout << "<--->"; n2.konum();
    std::cout << "\n\nAradaki mesafe: " << n1.mesafe(n2) << std::endl;

    return 0;
}
```