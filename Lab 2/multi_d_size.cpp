#include "prog.h"

int	main()
{
	printf("Char:  %zd bytes\n", sizeof(char));
	printf("Signed char: %zd bytes\n", sizeof(signed char));
	printf("Unsigned char: %zu bytes\n", sizeof(unsigned char));
	printf("Wchar_t: %zd bytes\n", sizeof(wchar_t));
	printf("Short: %zd bytes\n", sizeof(short));
	printf("Int: %zd bytes\n", sizeof(int));
	printf("Unsigned int: %zu bytes\n", sizeof(unsigned int));
	printf("Long: %zd bytes\n", sizeof(long));
	printf("Unsigned long: %zu bytes\n", sizeof(unsigned long));
	printf("Long long: %zd bytes\n", sizeof(long long));
	printf("Unsigned long long: %zu bytes\n", sizeof(unsigned long long));
	printf("Float: %zd bytes\n", sizeof(float));
	printf("Double: %zd bytes\n", sizeof(double));
	printf("Long double: %zd bytes\n", sizeof(long double));
	printf("Size_t: %zd bytes\n", sizeof(size_t));
	printf("Ptrdiff_t: %zd bytes\n", sizeof(ptrdiff_t));
	printf("Void*: %zd bytes\n", sizeof(void*));
	printf("Char*: %zd bytes\n", sizeof(char*));
	printf("Int*: %zd bytes\n", sizeof(int*));
	printf("Unsigned int*: %zu bytes\n", sizeof(unsigned int*));
	return (0);
}