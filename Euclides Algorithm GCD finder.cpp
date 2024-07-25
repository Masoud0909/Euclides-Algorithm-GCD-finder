// Euclides algorithm to calculate the greatest common divisor of two non-zero integers

#include <iostream>
using namespace std;

int  Euclides(int a, int b) {
	int rem;
	while (b != 0) {
		rem = a % b;
		  a = b;
		  b = rem;
	}
	cout << a;
	return a;
}
int main() {

	int a, b;
	cout << "Please enter 2 integers to calcualte GCD : ";
	cin >> a >> b;
	
	Euclides(a, b);


}

