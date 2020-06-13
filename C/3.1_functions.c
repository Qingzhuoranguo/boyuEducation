#include <stdio.h>
#include <string.h>

void printInstructions () {
	printf("Hello\n");
	return;
}

int myAddition ( int x, int y ){
	return x+y;
}

char *reverse ( char ls[] ){
	int len = strlen (ls);
	char tmp[len];
	for (int i =0; i < len; i ++){
		tmp [i] = ls[len-1-i];
	}
	for (int i =0; i <len; i ++){
		ls[i] = tmp[i];
	}
	return ls;
}

int main () {
	int x = 3;
	char y = 'a';
	float m = 3.1;
	double ls[5];
	void *ptr;

	printf("%p\n", &x);
	printf("%p\n", &y);
	printf("%p\n", &m);
	printf("%p\n", ls);
	printf("%p\n", ptr);

	return 0;
}


/*
32 bit binary
how many different number it can represent?
2^32 = 4,294,967,296 blocks
block -> byte

we can represent 4,294,967,296 byte of memory

4.294967296 GB


64 bit binary
2^64 = 18,446,744,073,709,551,616 blocks

18,446,744.073,709,551,616 TB

*/