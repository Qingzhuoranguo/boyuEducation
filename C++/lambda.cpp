#include <iostream>

using namespace std;
int main (){
	int x [10] = {1,2,3,4,5,6,7,8,9,10};
	
	cout << [x](){return *(x+1);}() << endl;

	auto f = [&x](/*arguments*/){  //[]: captures: = for all values(local), & for all addrs, 
		return x [0];
	};
	cout << f() << endl;
	return 0;
}