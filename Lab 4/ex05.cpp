#include "lab.h"

int main()
{
	int i = 0;

	short Ms[5];
	for (i = 0; i < 5; i++)
	       Ms[i] = 0xC0DE;
	printf("Ms decimal: ");
	for (i = 0; i < 5; i++)
		printf("%hd ", Ms[i]);
	printf("%c", '\n');
	printf("Ms hexadimal: ");
	for (i = 0; i < 5; i++)
		printf("%hX ", Ms[i]);
	printf("%c", '\n');

	int Ml[5];
	for (i = 0; i < 5; i++)
	       Ml[i] = 0xDEADBEEF;
	printf("Ml decimal: ");
	for (i = 0; i < 5; i++)
		printf("%d ", Ml[i]);
	printf("%c", '\n');
	printf("Ml hexadimal: ");
	for (i = 0; i < 5; i++)
		printf("%X ", Ml[i]);
	printf("%c", '\n');

	long Mq[5];
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

	float Mfs[5];
	for (i = 0; i < 5; i++)
		Mfs[i] = (float) M_PI;
	printf("Mfs decimal: ");
	for (i = 0; i < 5; i++)
		printf("%.25f ", (float) Mfs[i]);
	printf("%c", '\n');
	printf("Mfs hexadimal: ");
	for (i = 0; i < 5; i++)
		printf("%X ", *(unsigned int*)&Mfs[i]);
	printf("%c", '\n');

	double Mfl[5];
	for (i = 0; i < 5; i++)
		Mfl[i] = (double) M_PI;
	printf("Mfl decimal: ");
	for (i = 0; i < 5; i++)
		printf("%.25f ", Mfl[i]);
	printf("%c", '\n');
	printf("Mfs hexadimal: ");
	for (i = 0; i < 5; i++)
		printf("%X ", *(unsigned int*)&Mfl[i]);
	printf("%c", '\n');


	//Table output
	//
	printf("Table output\n");
	printf("%20hd %20hd %20hd %20hd %20hd\n", Ms[0], Ms[1], Ms[2], Ms[3], Ms[4]);
	printf("%20d %20d %20d %20d %20d\n", Ml[0], Ml[1], Ml[2], Ml[3], Ml[4]);
	printf("%20ld %20ld %20ld %20ld %20ld\n", Mq[0], Mq[1], Mq[2], Mq[3], Mq[4]);
	printf("%1.18f %1.18f %1.18f %1.18f %1.18f\n", Mfs[0], Mfs[1], Mfs[2], Mfs[3], Mfs[4]);
	printf("%1.18f %1.18f %1.18f %1.18f %1.18f\n", Mfl[0], Mfl[1], Mfl[2], Mfl[3], Mfl[4]);

	return 0;
}
