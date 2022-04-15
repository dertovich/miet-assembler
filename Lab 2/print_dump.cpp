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
	double dnum;
	void* p; 

	p = &argv[1];
	printf("Numder X:\t\t\t");
	printDump(p, 4);
	printf("Array of three numbers:\t\t");
	printDump(&argv, 12);
	return 0;
}	