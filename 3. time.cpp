// seconds to time

#include <iostream>
using namespace std;

class time	{
	private:
		int hour,minute,second;
		int thour,tmin,tsec;
	public:
		void convert(int input)	{
			thour = input / 3600;
			if( thour < 1)
				{
					hour = 0;
					tmin = input / 60;
					if(tmin < 1)
					{
						minute = 0;
						second = input;
					}
					else
					{
						minute = input / 60;
						second = input - (minute*60);
					}
				}
			else
				{
					hour = thour;
					tmin = input - (hour * 3600);
					if ( (tmin/60) < 1)	{
						minute = 0;
						second = tmin;
					}
					else	{
						minute = (tmin/60);
						second = input - ( hour * 3600 + minute * 60);
					}
				}
		}
		
		void display()	{
			cout << "Hour = " << hour << endl;
			cout << "Minute = " << minute << endl;
			cout << "Second = " << second << endl;
		}
};

int main()
{
	time t1;
	int x;
	cout << "Number of seconds: " ;
	cin >> x;
	t1.convert(x);
	t1.display();
}
