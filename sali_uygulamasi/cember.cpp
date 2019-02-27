#include <iostream>
#include <cmath>

//Classes
class Cember
{
    public:
        float r;
    public:
        void duzenle(float r_)
        {
            r = r_;
        }
    public:
        float cevre()
        {
            return (2*M_PI*r);
        }
    public:
        float alan()
        {
            return (M_PI*r*r);
        }
    public:
        void yaz()
        {
            std::cout << "[" << r << "]";
        }
};

//Main
int main(int argc, char* argv[])
{
    float cevre_;
    float alan_;
    Cember c1;
    c1.duzenle(4);

    std::cout << "Cember boyutlari: "; c1.yaz();
    cevre_ = c1.cevre();
    alan_ = c1.alan();

    std::cout << "\nCevre: " << cevre_ << std::endl;
    std::cout << "Alan: " << alan_ << std::endl;
}
