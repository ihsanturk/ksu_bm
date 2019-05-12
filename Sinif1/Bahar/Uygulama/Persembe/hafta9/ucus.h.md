```h
/*
 * Konu: Header Dosyası
 */

#include "ucak.h"
#include "pilot.h"

class Ucus : public Ucak, Pilot
{
public:
  int ucus_kodu;
  char* nereden;
  char* nereye;

  Ucus(int ucak_,
       int kapasite_,
       int pilot_id_,
       std::string isim_,
       int ucus_kodu_,
       char nereden_,
       char nereye_);

  void UcusBilgisi();
};
```
