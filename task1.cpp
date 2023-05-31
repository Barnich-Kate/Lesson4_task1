#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int countNumbers (int a, int b) {
	if (a > 50 || b > 50) {
		cout << "Yes ";
	} else {
		cout << "No ";
	}
	
}

int main() {
	int num = rand() % 100 + 1;
	int num2 = rand() % 100 + 1;
	int res = countNumbers(num, num2);
	cout << res << endl;
	
	}
    
