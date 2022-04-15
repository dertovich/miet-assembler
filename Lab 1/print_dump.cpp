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
	printf("Число x:\t\t\t");
	printDump(p, 4);
	printf("Массив из трех чисел:\t\t");
	printDump(&argv, 12);
	dnum = 42;
	p = &dnum;
	printf("Число с плавающей точкой:\t");
	printDump(p, 8);
	return 0;
}	