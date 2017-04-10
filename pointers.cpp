#include <iostream>
using namespace std;

void DoIt(int &foo, int goo);

int main() {
  int *foo, *goo;
  foo = new int;
  *foo = 1;
  goo = new int;
  *goo = 3;
  *foo = *goo + 3; // Points to 6
  foo = goo;  /* ============ IMPORTANT !!! ==================== */
  *goo = 5;
  *foo = *goo + *foo; // foo = 10
  cout << *foo << " " << *goo << endl;
  DoIt(*foo, *goo); // 10,10
  cout << (*foo) << endl;
}

void DoIt(int &foo, int goo) {
  foo = goo + 3; // foo = 8
  goo = foo + 4; // goo = 14
  foo = goo + 3; // 14 + 3 = 17
  goo = foo; // 17
} 
