NESNE YÖNELÝMLÝ PROGRAMLAMA LAB 4 (09-10.04.2019)

Konu: Inheritance

SORU 2:
/*Run Length Encoding ile sýkýþtýrýlmýþ bir metnin açýlmasý istenmektedir. Metinde 
geçen karakterler ve geçme frekanslarýný içeren diziler temel sýnýfýn birer üyesidir
ve karakter ve frekans bilgileri, temel sýnýfta tanýmlý bir fonksiyon yardýmýyla
 kullanýcýdan alýnmaktadýr. Metnin açýlmýþ halini ekrana yazdýran bir fonksiyon
 içeren sýnýf ise kalýtým ile temel sýnýftan türetilecektir.*/
 
#include<iostream>
using namespace std;
class compressMetin//temel sýnýf
{
	protected://temel sýnýfýn karakterleri ve onlarýn geçme frekanslarýný tutan
		char karakter[20]; //dizileri var.
		int frekans[20]; 
		public:
			void veriAl(int n)//kullanýcýdan karakterler ve geçme sýklýklarý 
			{					//alýnarak ilgili diziye atanýr.
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
					cout<<"Karakter:"<<karakter[i]<<" Frekansý:"<<frekans[i]<<endl;					
				}
			}
};
class decompressMetin:public compressMetin//compressMetin sýnýfýndan decompressMetin
{					//sýnýfý türetilir. decompressMetin sýnýfý compressMetin sýnýfýnýn
	public:			//private olmayan üyelerine eriþim hakkýna sahiptir.
		void metinAc(int n)//sýkýþtýrýlmýþ metin, compressMetin sýnýfýndaki karakter
		{					//ve frekans deðerleri kullanýlarak açýlýr.
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
	decompressedMetin metin;//türetilen sýnýftan bir nesne tanýmlandý.
	//türetilen sýnýf, temel sýnýfýn üyelerine eriþebilir.
	metin.veriAl(n);
	cout << "Metin: ";
	metin.metinAc(n);
}
