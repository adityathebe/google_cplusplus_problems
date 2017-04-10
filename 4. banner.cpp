#include <iostream>
using namespace std;

//	FFFFF
//	E	E
//	EEEEE
//	EEE
//	E  EEE

void printE();
void printF();
void printR();

int main() {
	printF();
	printR();
	printE();
	printE();			
}

void printE()	{
	cout << "EEEEE" << endl;
	cout << "E" << endl;
	cout << "EEE" << endl;
	cout << "E" << endl;
	cout << "EEEEE" << endl << endl << endl;
}

void printF()	{
	cout << "FFFFF" << endl;
	cout << "F" << endl;
	cout << "FFF" << endl;
	cout << "F" << endl;
	cout << "F" << endl << endl << endl;
}

void printR()	{
	cout << "RRRRR" << endl;
	cout << "R   R" << endl;
	cout << "RRRRR" << endl;
	cout << "RRR" << endl;
	cout << "R  RR" << endl << endl << endl;
}
