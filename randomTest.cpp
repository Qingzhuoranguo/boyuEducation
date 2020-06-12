#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
int main (){
	int x = 3;
	auto f = [&x](){
		x = 4;
		cout << x<< endl;
	};
	f();
	void function (){
		cout << "yes" << endl;
	}
	cout << x << endl;
	return 0;
}