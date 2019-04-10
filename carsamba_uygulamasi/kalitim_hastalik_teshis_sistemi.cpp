#include <iostream>

//Classes
class Teshis {
public:
  int doktor_t[5];
  int sistem_t[5];

  //Constr.
  Teshis(){
    doktor_t[0] = 1;
    doktor_t[1] = 3;
    doktor_t[2] = 2;
    doktor_t[3] = 4;
    doktor_t[4] = 5;
    doktor_t[5] = 4;


    sistem_t[0] = 2;
    sistem_t[1] = 3;
    sistem_t[2] = 2;
    sistem_t[3] = 4;
    sistem_t[4] = 5;
    sistem_t[5] = 4;
  }
};

class Olcum: public Teshis {
public:
  int boyut = 5; // listedeki eleman sayisi
  float yuzde = boyut;

  int dogruluk() {
    for(int i = 0; i < boyut; i++) {
      if(doktor_t[i] != sistem_t[i]) {
        yuzde--;
      }
    }
    yuzde = (float)yuzde / (float)boyut * 100;
    return yuzde;
  }
};
  
//Main
int main(int argc, char *argv[]) {
	Teshis tes_nesne;
  Olcum olc_nesne;

  std::cout << "Sistemin dogrulugu: "<< olc_nesne.dogruluk() << "%" << std::endl;

}
