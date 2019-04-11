```cpp
NESNE YONELIMLI PROGRAMLAMA LAB 4 (09-10.04.2019)

Konu: Inheritance

SORU 2:
/*Run Length Encoding ile skstrlms bir metnin acilmasi istenmektedir. Metinde 
gecen karakterler ve gecme frekanslarini iceren diziler temel sinifin birer uyesidir
ve karakter ve frekans bilgileri, temel sinifta tanimli bir fonksiyon yardimiyla
 kullanicidan alinmaktadir. Metnin acilmis halini ekrana yazdiran bir fonksiyon
 iceren sinif ise kalitim ile temel siniftan turetilecektir.*/
 
#include<iostream>
using namespace std;
class compressMetin//temel sinif
{
	protected://temel sinifin karakterleri ve onlarin gecme frekanslarini tutan
		char karakter[20]; //dizileri var.
		int frekans[20]; 
		public:
			void veriAl(int n)//kullanicidan karakterler ve gecme sikliklari 
			{					//alinarak ilgili diziye atanir.
				for (int i=0;i<n;i++)
				{
					cout<<"Karakter:";cin>>karakter[i];
					cout<<"Gecme Sayisi:";cin>>frekans[i];					
				}				
			}
			void Yazdir(int n)
			{
				for (int i=0;i<n;i++)
				{
					cout<<"Karakter:"<<karakter[i]<<" Frekansi:"<<frekans[i]<<endl;					
				}
			}
};
class decompressMetin:public compressMetin//compressMetin sinifindan decompressMetin
{					//sinifi turetilir. decompressMetin sinifi compressMetin sinifinin
	public:			//private olmayan uyelerine erisim hakkina sahiptir.
		void metinAc(int n)//skstrlms metin, compressMetin sinifindaki karakter
		{					//ve frekans degerleri kullanilarak acilir.
			for (int j=0;j<n;j++)
			{
				for (int i=0;i<frekans[j];i++)
				{
					cout << karakter[j];
				}
			}

		}
};
main()
{	
	int n;
	cout<<"Karakter Sayisi:";cin>>n;
	decompressedMetin metin;//turetilen siniftan bir nesne tanimlandi.
	//turetilen sinif, temel sinifin uyelerine erisebilir.
	metin.veriAl(n);
	cout << "Metin: ";
	metin.metinAc(n);
}
```
