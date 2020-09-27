#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code
    int a, b;
    const char *arr[10] = {"zero", "one", "two", "three", "four",     "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;

    for(int i=a; i <= b; i++) {
	if(i > 9 && i%2 == 0) {
		cout << "even" << endl;
	}
	else if(i > 9 && i%2 == 1) {
		cout << "odd" << endl;
	}
	else {
		cout << arr[i] << "\n";
	}
    }
    return 0;
}
