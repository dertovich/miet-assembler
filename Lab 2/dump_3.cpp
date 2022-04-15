#include "prog.h"

void	printDump(void	*p, size_t	N)
{
	size_t	i;

	i = 0;
	char *charptr = static_cast<char*>(p);
	while (i < N)
	{
		short x = static_cast<short>(*charptr);
		printf("%X", x);
		charptr++;
		i++;
	}
	printf("\n");
}

int main(int argc, char const *argv[]) 
{
	void* p;
	wchar_t	s[9];

	p = &argv[1];
	printf("abczklmn:\t");
	printDump(p, 9);
	p = &argv[2];
	printf("абвёклмн:\t");
	printDump(p, 9);
	wchar_t	s1 = L "abczklmn";
	p = &s1;
	printf("Широкая abczklmn:\t");
	printDump(p, 9);
	wchar_t	s2 = L "абвёклмн";
	p = &s2;
	printf("Широкая абвёклмн:\t");
	printDump(p, 9);

	return 0;
}	