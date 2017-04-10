/* Write a function called accelerate() that takes as input the speed of a vehicle, and an amount. 
The function adds the amount to the speed to accelerate the vehicle. 
The speed parameter should be passed by reference, and amount by value. */

#include <iostream>
using namespace std;

void accelerate (int &vel, int amt);

int main()	{
	int speed, increase;
	cout << "Enter the speed of the vehicle" << endl;
	cin >> speed;
	cout << "How much speed to add?" <<endl ;
	cin >> increase;
	accelerate (speed, increase);
}

void accelerate(int &vel, int amt)	{
	int new_speed = vel + amt;
	cout << "New speed: " << new_speed << endl;
}


