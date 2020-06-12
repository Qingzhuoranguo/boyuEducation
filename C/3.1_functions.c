#include <stdio.h>
#include <string.h>

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
	char ls[] = "abcdef";
	char *ls2;


	memcpy (ls2, ls, strlen(ls)+1);

	printf("%s\n", ls);
	printf("%s\n", ls2);
	
	// printf("%s\n", reverse(ls));

	return 0;
}