#include <iostream>

//Classes
class Ucgen
{
    public:
        float t, k1, k2, h;
    public:
        void duzenle(float t_, float k1_, float k2_, float h_)
        {
            t = t_;
            k1 = k1_;
            k2 = k2_;
            h = h_;
        }
    public:
        float cevre()
        {
            return (t+k1+k2);
        }
    public:
        float alan()
        {
            return (t*h/2);
        }
    public:
        void yaz()
        {
            std::cout << "[" << t << ", " << k1 << ", " << k2 << ", " << h << "]";
        }

};

//Main
int main(int argc, char* argv[])
{
    float cevre_;
    float alan_;
	Ucgen u1;

    u1.duzenle(3, 4, 5, 3);

    std::cout << "Ucgen boyutlari: "; u1.yaz();
    cevre_ = u1.cevre();
    alan_ = u1.alan();

    std::cout << "\nCevre: " << cevre_ << std::endl;
    std::cout << "Alan: " << alan_ << std::endl;
}
