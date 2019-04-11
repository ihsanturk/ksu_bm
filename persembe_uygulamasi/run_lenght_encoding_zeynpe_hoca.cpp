NESNE Y�NEL�ML� PROGRAMLAMA LAB 4 (09-10.04.2019)

Konu: Inheritance

SORU 2:
/*Run Length Encoding ile s�k��t�r�lm�� bir metnin a��lmas� istenmektedir. Metinde 
ge�en karakterler ve ge�me frekanslar�n� i�eren diziler temel s�n�f�n birer �yesidir
ve karakter ve frekans bilgileri, temel s�n�fta tan�ml� bir fonksiyon yard�m�yla
 kullan�c�dan al�nmaktad�r. Metnin a��lm�� halini ekrana yazd�ran bir fonksiyon
 i�eren s�n�f ise kal�t�m ile temel s�n�ftan t�retilecektir.*/
 
#include<iostream>
using namespace std;
class compressMetin//temel s�n�f
{
	protected://temel s�n�f�n karakterleri ve onlar�n ge�me frekanslar�n� tutan
		char karakter[20]; //dizileri var.
		int frekans[20]; 
		public:
			void veriAl(int n)//kullan�c�dan karakterler ve ge�me s�kl�klar� 
			{					//al�narak ilgili diziye atan�r.
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
					cout<<"Karakter:"<<karakter[i]<<" Frekans�:"<<frekans[i]<<endl;					
				}
			}
};
class decompressMetin:public compressMetin//compressMetin s�n�f�ndan decompressMetin
{					//s�n�f� t�retilir. decompressMetin s�n�f� compressMetin s�n�f�n�n
	public:			//private olmayan �yelerine eri�im hakk�na sahiptir.
		void metinAc(int n)//s�k��t�r�lm�� metin, compressMetin s�n�f�ndaki karakter
		{					//ve frekans de�erleri kullan�larak a��l�r.
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
	decompressedMetin metin;//t�retilen s�n�ftan bir nesne tan�mland�.
	//t�retilen s�n�f, temel s�n�f�n �yelerine eri�ebilir.
	metin.veriAl(n);
	cout << "Metin: ";
	metin.metinAc(n);
}
