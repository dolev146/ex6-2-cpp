/**
 * Demo program for Team exercise.
 * 
 * Author: DOLEV DUBLON
 * Since : 01/07/2022
 */


#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	cout << "aaa" << endl;

	cout << "bbb" << endl; 

	try {
		cout << "cccc" << endl; // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Mat size is always odd"
	}
}
