#include <stdio.h>

#include "strlen.h"

int main () {
	char* str = "this string is 33 characters long";

	printf("String: \"%s\" \n\n", str);
	printf("strlen = %d \n", strlen(str));
}
