```cpp
#include <ucus.h>

Ucus::Ucus(int ucak_,
           int kapasite_,
           int pilot_id_,
           std::string isim_,
           int ucus_kodu_,
           char* nereden_,
           char* nereye_) :
           Ucak(ucak_, kapasite_),
           Pilot(pilot_id, isim_)
{
  ucus_kodu = ucus_kodu_;
  nereden   = nereden_;
  nereye    = nereye_;
}

void Ucus::UcusBilgisi()
{

}
```
