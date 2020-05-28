#include <iostream>


double fact ( double n ){
	if (n == 0){
		std::cout << "end\n";
		return 1;
	}else{
		return n * fact (n-1);
	}
}

double fact1 ( double a, double n){
	if (n == 0){
		return a;
	}else{
		return fact1(a*n, n -1);
	}
}

double N = 100000;

int main (){

	
	// std::cout << fact(N) << std::endl;
	std::cout << fact1(1,N) << std::endl;

	return 0;
}