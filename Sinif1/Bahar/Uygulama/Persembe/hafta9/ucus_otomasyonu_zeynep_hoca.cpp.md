```cpp
//NESNE YÖNELÝMLÝ PROGRAMLAMA LAB 6(09.05.2019)
/*
 * Konu: Genel Tekrar Zeynep Hoca
 */

#include<iostream>
using namespace std;
class Ucak
{
	public:
		int ucakId;
		int kapasite;
	public:
		//ucak sýnýfýnýn kurucu metodu
		Ucak(int ucakId, int kapasite)
		{
			this->ucakId=ucakId;
			this->kapasite=kapasite;
		}
		void ucakTanit()
		{
			cout<<"ucak id:"<<ucakId<<", kapasite:"<<kapasite<<endl;
		}
};
class Pilot
{
	public:
		int pilotId;
		string Adi;
	public:
		//pilot sýnýfýnýn kurucu metodu
		Pilot(int pilotId, string Adi)
		{
			this->pilotId=pilotId;
			this->Adi=Adi;
		}
		void pilotTanit()
		{
			cout<<"pilot id: "<<pilotId<<", pilotun adi:"<<Adi<<endl;
		}
};
//Ucus sýnýfý Ucak ve Pilot sýnýflarýndan türetilmiþtir.
class Ucus: public Ucak, public Pilot
{
	private:
		int ucusKodu;
	public:
		char sourceKod;
		char destKod;
	public:
		//kalýtým ile türetilmiþ bir sýnýfýn kurucu metodu, kendisinden türediði
		// temel sýnýflarýn da kurucu metodlarýný içermelidir.Bu nedenle kurucu
		//metodda temel sýnýflarýn kurucu metodlarýnýn parametreleri de bulunur
		Ucus(int ucakId, int kapasite,int pilotId, string Adi, int ucusKodu,
			char sourceKod,char destKod):
			Ucak(ucakId,kapasite),//Ucak sýnýfýnýn kurucu metodu çaðrýldý
			Pilot(pilotId,Adi)	//Pilot sýnýfýnýn kurucu metodu çaðrýldý
		{
			this->ucusKodu=ucusKodu;
			this->sourceKod=sourceKod;
			this->destKod=destKod;
		}
		void ucusBilgisi()
		{
			cout<<ucusKodu<<" kodlu ucus "<<sourceKod<<" sehrinden "<<destKod<<
				" sehrine, "<<ucakId<<" nolu ve "<<kapasite<<
				" kapasiteli ucakla yapilacaktir."<<endl;
			cout<<"Ucus icin kaptan pilot:\n";
			pilotTanit();
			cout<<" olarak belirlenmistir\n\n";
    	}
};
int main()
{
	int ucusSayisi=3;
	//Ucus sýnýfýndan bir pointer dizisi tanýmlanýr ve ilklendirilir
	Ucus *ucusPtr=new Ucus[3]{{5,100,2,"Ahmet",203,'T','M'},
				  {10,200,4,"Mehmet",406,'K','R'},
				  {2,50,1,"Ali",101,'F','M'}};
	for (int i=0;i<ucusSayisi;i++)
	{
		(ucusPtr+i)->ucusBilgisi();
	}
}
```
