#include <stdio.h>

#include "strlen.h"
#include "strcmp.h"

int main () {
	char* s1 = "this string is 33 characters long";
	char* s2 = "same";
	char* s3 = "same";

	printf ("String 1: \"%s\"\n"
		"String 2: \"%s\"\n"
		"String 3: \"%s\"\n"
		, s1, s2, s3);

	printf("strlen = %d \n", strlen(s1));
	printf("strcmp (s2, s3) = %d\n", strcmp(s2, s3));
	printf("strcmp (s1, s2) = %d\n", strcmp(s1, s2));
}
