#include "lab.h"

int main() {
	char s1[101];
	char s2[101];
	char s3[101];
	char buff[101];

	printf("Input s1: ");
	scanf("%100s", s1);
	while (getchar() != '\n');

	printf("Input s2: ");
	fgets(buff, 100, stdin);
	strncpy(s2, buff, strlen(buff) - 1);
	
	//while (getchar() != '\n');
	printf("Input s3: ");
	scanf("%100s", s3);
	printf("***%s***\n***%s***\n***%s***\n", s1, s2, s3);
	return 0;
}
