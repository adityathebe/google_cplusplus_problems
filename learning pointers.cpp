// Learning Pointers

#include <iostream>
using namespace std;

int main()
{
	int *p1 , *p2, num;
	num = 5 ;
	p2 = new int;
	
	p1 = &num;
	cout << "P1 points to: " << *p1 << endl;
	p1 = p2;
	*p1 = 100;
	cout << "P2 points to: " << *p2 << endl;
}
