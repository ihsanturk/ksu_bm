//============================================================================
// Name        : Nesne_Overloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Time
{
    int h,m,s;
    public:
    Time()
    {
        h=0, m=0; s=0;
    }
    void setTime();
    void show()
    {
        cout<< h<< ":"<< m<< ":"<< s;
    }

    //overloading '+' operator
    Time operator+(Time);
};

Time Time::operator+(Time t1)	//operator function
{
    Time t;
    int a,b;
    a = s+t1.s;
    t.s = a%60;
    b = (a/60)+m+t1.m;
    t.m = b%60;
    t.h = (b/60)+h+t1.h;
    t.h = t.h%12;
    return t;
}

void Time::setTime()
{
    cout << "\n Enter the hour(0-11) ";
    cin >> h;
    cout << "\n Enter the minute(0-59) ";
    cin >> m;
    cout << "\n Enter the second(0-59) ";
    cin >> s;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	 Time t1,t2,t3;

	    cout << "\n Enter the first time ";
	    t1.setTime();
	    cout << "\n Enter the second time ";
	    t2.setTime();
	    t3 = t1 + t2;	//adding of two time object using '+' operator
	    cout << "\n First time ";
	    t1.show();
	    cout << "\n Second time ";
	    t2.show();
	    cout << "\n Sum of times ";
	    t3.show();

	return 0;
}
