//	input number: 901
//	reverse it: 109
//	subtract: 901 - 109 = 792
//	reverse it: 297
//	add: 297 + 792 = 1089  

#include<iostream>
using namespace std;

int reverse(int x);

int main()
{
	int num,rNum,num2,rNum2,num3;
	cout << "Enter a number: ";
	cin >> num;
	rNum = reverse(num);
	num2 = num - rNum;
	rNum2 = reverse(num2);
	num3 = num2 + rNum2;
	
	cout << "Reverse it: " << rNum << endl;
	cout << "subtract: " << num << " - " << rNum  << " = " << num2 << endl;
	cout << "reverse it: " << rNum2 << endl;
	cout << "add: " << num2 << " + " << rNum2 << " = " << num3 <<endl;
	
}

int reverse(int x)	{
	int n=0, temp;
	temp = x;

	while(temp!=0){
		temp = temp/10;
		n++;
	}
	
	temp = 0;
	
	for(int i=0; i<n ; i++)	{
	
		temp = (temp * 10) + (x % 10);
		x = x/10;
	}
	
	return temp;
}
