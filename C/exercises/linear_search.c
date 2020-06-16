#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int linear_search (int target, int *A, int len){
	for (int i = 0; i < len; i ++ ){
		if (target == *(A+i)){
			return i;
		}
	}
	return -1;
}
