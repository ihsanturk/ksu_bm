// Verilen iki deger arasindaki asal sayilari bulma
//

#include<iostream>
 
using namespace std;
 
class prime
{
	public:
        int min;
        int max;
	public:
		prime()//default constructor
		{
			min = 0;					
			max = 100;
		}
    /*
		prime(int k, int b)//parametreli constructor
		{
			min=k;
			max=b;
		}
		prime(const prime &p2) //copy constructor
		{
			min = p2.min; 
			max = p2.max; 
		}
    */
		void minMaxYazdir()
		{
			cout << "\nmin= " <<  min<< ", max= " << max << endl;
		}
		int primeBul (int k, int b)
		{
			int num,i,count,toplam=0;
		    for(num = k;num<=b;num++)
			{
		        count = 0;
		        for(i=2; i <= num / 2; i++)
				{
		            if(num%i==0){
		                count++;
		                break;
		            }
		        } 
		        if(count==0 && num!= 1)
		        {
		        	toplam++;
		            cout << num <<"-";
		        }
		        	
		    }
		    cout <<"\n"<< toplam << " adet asal sayi var" <<endl;
		    return 0;
		}
		prime sinirBuyut(prime c) const
		{
			prime p;					
			p.max=max+c.max;
			p.min=c.min;
			return p;
		}
		~prime()//yikici metod
		{
			cout <<"hafiza temizlendi" <<endl;
		}
}; 
int main()
{
    prime sayilar;
    //default constructor içine yazilmis degerler ile islem yapar
    sayilar.minMaxYazdir();
    cout << sayilar.min << "-" <<sayilar.max<<" arasindaki asal sayilar"<< endl;
    sayilar.primeBul(sayilar.min,sayilar.max);
    
    //parametreli constructor için islem yapar
    prime sayilar2(20,30);
    sayilar2.minMaxYazdir();
    cout << sayilar2.min << "-" <<sayilar2.max<<" arasindaki asal sayilar"<< endl;
    sayilar2.primeBul(sayilar2.min,sayilar2.max);
    
    //copy constructor için islem yapar
    prime yeni(sayilar);//ilk prime degiskeni olan 0-100 içeren sinifi kopyalar
    yeni.minMaxYazdir();
    sayilar=yeni.sinirBuyut(sayilar);//min=min max=max+max olacak sekilde üst limit artirilir
    sayilar.minMaxYazdir();
    cout << sayilar.min << "-" <<sayilar.max<<" arasindaki asal sayilar"<< endl;
    sayilar.primeBul(sayilar.min,sayilar.max);
    return 0;
}
