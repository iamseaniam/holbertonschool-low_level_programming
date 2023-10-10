#include "main.h"

char *_strcpy(char *dest, char *src, int n) {
	char *start = dest;

	while(n-- && (src != '\0')) {
		*dest++ = *src++;
	}
	while(n--) {
		*dest++ = '\0';
	}
	return start;
}
