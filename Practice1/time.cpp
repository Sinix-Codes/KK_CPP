#include<iostream>
using namespace std;

class Time{
	public:
		int hours;
		int minutes;

	Time(int h,int m){
		hours = h;
		minutes = m;
	}
	
	int getHours(){
		return hours;		
	}
	int getMinutes(){
		return minutes;
	}
	
	Time addTime(Time a,Time b){
		hours = a.getHours()+b.getHours();
		minutes = a.getMinutes()+b.getMinutes();

		if(minutes>=60)
		{
			hours += minutes/60;
			minutes %= 60;
		}
		return Time(hours,minutes);
	}
};


int main()
{
	Time a(2,40);
	Time b(7,40);
		
	Time sum = sum.addTime(a,b);
	
	cout<<sum.getHours()<<":"<<sum.getMinutes();
	return 0;
}