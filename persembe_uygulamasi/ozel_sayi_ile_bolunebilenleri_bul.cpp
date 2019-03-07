//iki deger arasindaki verilen baska bir deger ile bolunebilen sayilari bulma
#include<iostream>
 
using namespace std;
 
class bolunme
{
	public:
	int min;
	int max;
	public:
		bolunme()//default constructor
		{
			min = 0;					
			max = 100;
		}
		bolunme(int k, int b)//parametreli constructor
		{
			min=k;
			max=b;
		}
		bolunme(const bolunme &p2) //copy constructor
		{
			min = p2.min; 
			max = p2.max; 
		}
		void minMaxYazdir()
		{
			cout << "\nmin= " <<  min<< ", max= " << max << endl;
		}
		int bolunenBul (int k, int b,int sayi)
		{
			int i,count=0;
			if (k%sayi==0)
			{
				i=k;
			}
			else
			{
				i=k/sayi;
			i=(i+1)*sayi;
			}			
    		while(i<=b)
    		{    	
    			cout << i <<"-";
    			count=count++;
    			i=i+sayi;
    		}
    		cout <<"\n"<< count << " adet " << sayi << " ile bolunebilir sayi var " <<endl;
    		return 0;
		}
		bolunme sinirBuyut(bolunme c) const
		{
			bolunme b;					
			b.max=max+c.max;
			b.min=c.min;
			return b;
		}
		~bolunme()//yikici metod
		{
			cout <<"hafiza temizlendi" <<endl;
		}
}; 
int main()
{
	int bolen;
	cout<<"bolunecek sayiyi girin:";
	cin>>bolen;
	
	//default constructor içine yazilmis degerler ile islem yapar
    bolunme sayilar;
    sayilar.minMaxYazdir();     
    cout << sayilar.min << "-" <<sayilar.max<<" arasindaki "<<bolen<< " ile bolunebilen sayilar" <<endl;
    sayilar.bolunenBul(sayilar.min,sayilar.max,bolen);
    
    //parametreli constructor için islem yapar.min ve max degerleri sirasiyla 20 
    //ve 30 olarak atanir
    bolunme sayilar2(20,30);
    sayilar2.minMaxYazdir();
    cout << sayilar2.min << "-" <<sayilar2.max<<" arasindaki "<<bolen<< " ile bolunebilen sayilar" <<endl;
    sayilar2.bolunenBul(sayilar2.min,sayilar2.max,bolen);
    
	//copy constructor için islem yapar    
    bolunme yeni(sayilar);//ilk bolunme degiskeni olan sinifi kopyalar.Yani min=0, max=100 olacaktir
    yeni.minMaxYazdir();
    sayilar=yeni.sinirBuyut(sayilar);//min=min max=max+max olacak sekilde ust limit artirilir
    sayilar.minMaxYazdir();
    cout << sayilar.min << "-" <<sayilar.max<<" arasindaki "<<bolen<< " ile bolunebilen sayilar" <<endl;
    sayilar.bolunenBul(sayilar.min,sayilar.max,bolen);
    return 0;
}
