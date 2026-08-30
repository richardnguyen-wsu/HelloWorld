#include "HelloWorld.h"
#include <iostream>
/*
References: Used Dr. Feuz's PalidromeTest.cpp as a template and Google Gemini to help learn how to write unit test for Hello World.
Instructions:
Two projects are used in this solution.
When you want to run a certain project you can either:
1) right click the project and click "Set as Startup Project"
1a) then you can click F5 to start debugging or Ctrl+F5 to start without debugging.
or
1b) then you can click one of the green run icons at the top (either the one with or without debugging)
2) right click on the project and click "Debug"->"Start a New Instance" or "Debug"->"Start Without Debugging".
*/

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