#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
int main (){
	int x [10] = {1,2,3,4,5,6,7,8,9,10};
	
	cout << [x](){return *(x+1);}() << endl;
	return 0;
}