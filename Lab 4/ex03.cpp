#include "lab.h"

int main()
{
	int i = 0;
	int a = 0;
	//Array initialisation
	//Long
	long long unsigned int Mq[5];
	for (i = 0; i < 5; i++)
	       Mq[i] = 0xBECACA01FFEDC0CA;
	printf("Mq decimal: ");
	for (i = 0; i < 5; i++)
		printf("%ld ", Mq[i]);
	printf("%c", '\n');
	printf("Mq hexadimal: ");
	for (i = 0; i < 5; i++)
		printf("%lX ", Mq[i]);
	printf("%c", '\n');

	//Long
	printf("Input values for long array: ");

	while ((a = scanf("%ld %ld %ld %ld %ld", &Mq[0], &Mq[1], &Mq[2], &Mq[3], &Mq[4])) != 5){
		printf("Incorrect input of %d value\n" , a + 1);
		puts("Wrong input, try again");
		while(getchar() != '\n');
	} 
	printf("Mq decimal: ");
	for (i = 0; i < 5; i++)
		printf("%ld ", Mq[i]);
	printf("%c", '\n');
	printf("Mq hexadimal: ");
	for (i = 0; i < 5; i++)
		printf("%lX ", Mq[i]);
	printf("%c", '\n');

	return 0;
}
