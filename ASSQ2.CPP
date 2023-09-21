#include<iostream.h>
#include<conio.h>
class Time
{
	private:
		int hh,mm,ss;
	public:
		Time()
		{
			hh=2;
			mm=34;
			ss=56;
		}
		Time(Time &t)
		{
			hh=t.hh;
			mm=t.mm;
			ss=t.ss;
		}
		void putTime()
		{
			cout<<"\n\t"<<hh;
			cout<<":"<<mm;
			cout<<":"<<ss;
		}
};
void main()
{
	clrscr();
	Time t1;
	Time t2(t1);
	t1.putTime();
	cout<<"\n\t-------------------";
	t2.putTime();
	getch();
}