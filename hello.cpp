// hello.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;



int main() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(17) << "Hello World!";
		}
		cout << endl;
	}
    return 0;
}

