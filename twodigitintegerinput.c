#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 10

int isvalid(char *);

int main(void)
{
	char num[MAX];
	
	printf("INPUT?\n");
	scanf("%[^\n]s", num);
	
	if(isvalid(num)) {
		
		printf("VALID\n");
	}
	else {
		
		printf("INVALID\n");
	}
	
	return 0;
}

int isvalid(char *s)
{
	if(strlen(s) == 2) {
		
		if(isdigit(s[0]) && isdigit(s[1])) {
			
			return 1;
		}
	}
	return 0;
}