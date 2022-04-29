#include "lab.h"

int main() {
	char s1[101];
	char s2[101];
	char s3[101];
	char buff[101];

	scanf("%100s", s1);
	while (getchar() != '\n' || getchar() == ' ');

	fgets(buff, 100, stdin);
	strncpy(s2, buff, strlen(buff) - 1);

	scanf("%100s", s3);
	printf("Input s1:\n***%s***\nInput s2:\n***%s***\nInput s3:\n***%s***\n", s1, s2, s3);
	return 0;
}
