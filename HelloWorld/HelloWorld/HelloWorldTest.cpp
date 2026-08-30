#include "HelloWorld.h"
#include <iostream>

using std::cout;
using std::endl;

template <typename T>
void test(int testNum, int &correct, T actual, T expected){
	if (actual == expected) {
		correct++;
		cout << "Passed Test " << testNum << endl;
	}
	else {
		cout << "Failed Test " << testNum << endl;
		cout << "Actual: " << actual << " Expected: " << expected << endl;
	}
}

int main() {
	int testNum = 1;
	int correct = 0;
	cout << "----Hello World Test----" << endl;
	test(testNum++, correct, HelloWorld::runHelloWorld(), string("Hello World!\n"));
}