```cpp
//NESNE YONELIMLI PROGRAMLAMA LAB 4 (09-10.04.2019)

//Konu: Inheritance

//SORU 1:
/*Bir hastalik teshis sisteminin basarisi olculmek istenmektedir. n tane hasta
icin, doktor ve sistem bilgileri temel sinifta tutulmaktadir. Sistemin basarisi
kalitim ile turetilen bir sinif ile olculecektir.*/
#include<iostream>
using namespace std;
class teshis//temel sinif
{
	public:
		int doktor[5];
		int sistem[5];
		public:
			teshis()//default constructor ile doktorun ve sistemin teshis bilgileri girilir
			{
				doktor[0]=1;doktor[1]=2;doktor[2]=3;doktor[3]=4;doktor[4]=5;
				sistem[0]=1;sistem[1]=3;sistem[2]=3;sistem[3]=4;sistem[4]=1;
			}
			void Yazdir(int n)
			{
				cout << "Teshisler:"<<endl;
				for (int i=0;i<n;i++)
				{
					cout <<i<< ".hasta"<<endl;
					cout << "doktor= "<< doktor[i]<< "-sistem= " << sistem[i]<< endl;
				}

			}
};

class dogruluk:public teshis//kalitim ile turetilen sinif
{
	public:
		dogruluk():teshis()//turetilen sinif icin default constructor temel sinifin
		{			//kurucu fonksiyonunu da icermelidir.
		}
		//doktorun teshisi ile sistemin teshisi arasindaki fark 0 ise, sistem
		//dogru teshis etmis demektir.Her dogru teshiste sayac degiskeni 1 artar
		void sistemDogruluguHesapla(int n)
		{
			int sayac=0;
			for (int i=0;i<n;i++)
			{
				if ((doktor[i]-sistem[i])==0)
				{
					sayac++;
				}
			}
			cout << "Sistem Dogrulugu "<< sayac<< endl;
		}
};
main()
{
	int n=5;
	dogruluk d;//turetilen siniftan bir nesne tanimlandi.
	d.Yazdir(n);//turetilen sinif, temel sinifa ait private olmayan fonksiyonlar erisebilir
	d.sistemDogruluguHesapla(n);//turetilen sinifin, temel siniftakilerden baska,
								// kendinene ait uye ve fonksiyonlari olabilir
}```
