#include <iostream>
#include <cmath>

//Classes
class Nokta
{
    private: 
        void sinira_getir(int x_yeni, int y_yeni)
        {
            if(x_yeni > xUL) x = xUL;
            else if(x_yeni < xAL) x_yeni = xAL;
            else x = x_yeni;

            if(y_yeni > yUL) y = yUL;
            else if(y_yeni < yAL) y_yeni = yAL;
            else y = y_yeni;
        }


    public: 
        //xAL ---> x icin alt limit
        float x, y, xAL=0, xUL=10, yAL=0, yUL=20; 


        //Constructor Function / Yapici fonksiyonu
        Nokta(int x_, int y_)
        {
            sinira_getir(x_, y_);
        }


        void konum()
        {
            std::cout << "[" << x << ", " << y << "]";
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


        void git(int x_yeni, int y_yeni)
        {
            sinira_getir(x_yeni, y_yeni);
        }


        float mesafe(Nokta n)
        {
            float msf = sqrt(abs((x - n.x) * (x - n.x)) + abs((y - n.y) * (y - n.y)));
            return msf;
        }


        virtual ~Nokta()
        {
            //Nesne cikisi
        }
};


//Main
int main(int argc, char* argv[])
{
    /*
	Kurucu/Yapici fonksiyon (Construction)
        Sinif ismi ile ayni isme sahip olur
        Nesne olusturuldugunda bu fonksiyon calisir

	Yikici fonksiyon (Construction)
        Sinif ismi ile ayni isme sahip olur
        Nesne yok edilirken, hafizdan silinirken bu fonksiyon calisir
    */

    Nokta p1(10, 50);
    std::cout << "p1: "; p1.konum(); std::cout << std::endl;

    p1.git(618, 382);
    std::cout << "p1: "; p1.konum(); std::cout << std::endl;


    Nokta *p2;
    p2 = &p1;
    p2->git(3, 1);

    std::cout << "p2: "; p2->konum(); std::cout << std::endl;
}
