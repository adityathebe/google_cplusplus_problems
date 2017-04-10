// Aditya Thebe
// Description: A program to find numbers that are perfect and are also the sum of consecutive natural numbers.

#include <iostream>
#include <cmath>
using namespace std;

int findsum(int x);
int checkperfect(int y);

int main()
{
	int limit,count=0;
	cout << "Numbers to find: ";
	cin >> limit;
	for(int i = 0 ; i < 50000000 ; i ++)	{
		if(findsum(i) == 1)
		{
			if(checkperfect(i))
			{
				cout << i << endl;
				count++;
			}
		}
		if(limit == count )
			break;
	}
}

int findsum(int x)	{
	int temp = 0;
	for(int i=1; i<=x; i++)
	{
		temp = temp + i;
		if(temp == x)
		{
			return 1;
		}
	}
}

int checkperfect(int y)	{
	float temp, temp1;
	temp = sqrt(y);
	temp1 = (int)temp;
	if(temp1 == temp)
		return true;
	else
		return false;
}
