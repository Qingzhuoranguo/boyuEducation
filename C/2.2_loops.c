#include <stdio.h>


int main (){
	//python:
	// for i in range(5):
	// 	operation
	// range(a,b,c)
	
	for (int i = 0; i < 5; i++){
		printf("hi\n");
	}

	int x = 0;
	while (x<3){
		printf("hello\n");
		x = x + 1;
	}


	// do-while loop
	// do{
	// 	operation;
	// }while(condition);

	/*
	1. ask for a input
		whilie input is invalid
			keep asking
			if valid go to 2
	2. tell user if the input is right
	*/
	// input = ask()
	// while (invalid){
	// 	intput = ask()
	// 	if (valid){
	// 		break;
	// 	}
	// }

	// do {
	// 	input = ask()
	// }while(invalid);

	return 0;
}



