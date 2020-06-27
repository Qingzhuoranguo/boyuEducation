#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replication ( char *str ) {
	int checkWindow = 1;
	int len = strlen (str);
	return NULL;
}

char *token ( char *str, int windowSize ){
	int len = strlen (str);
	char **token;
	// if (len < windowSize){
	// 	return NULL;
	// }
	int base = 0;
	for (int i = 0; i < windowSize; i ++ ){
		token[base][i] = str[base+1];
	}
	token[base][windowSize] = '\0';
	printf("%s\n", token[base]);
}

int main () {
	char str[] = "ababababa";
	token (str,2);
	// replication (str);
	return 0;
}

w = 1
a b a
return a 

w=2
ab ab
return ab

w=3
aba bab aba
return aba


w=4
abab abab a
return abab

w=5
ababa baba
return NULL

w=2
char str [] = "ababababa"

ab ab ab ab a


char ls [5] = {"ab","ab","ab","ab","a"}

check_repeat(ls);


loop w from 1 to ... (len/2)+1
	ls = tokenize (str, w)
	repeat_str = check_repeat (ls)
	current_longest_repeat = repeat_str
	if (current_longest_repeat == NULL)
		return prev_current_longest_repeat


char *check_repeat ( char *ls ){
	return repeat_str
}