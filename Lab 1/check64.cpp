#include "prog.h"

void	printf64(void	*p)
{
	std::cout << "Hex - ";
	printf("%#x\n", *(reinterpret_cast<unsigned long long *>(p)));

	std::bitset<16> ptr1 ( *(reinterpret_cast<unsigned long long *>(p)) );
	std::cout << "Binary - " << ptr1 << std::endl;

	std::cout << "Decimal - ";
	printf("%d\n", *(reinterpret_cast<unsigned long long* >(p)));
	std::cout << std::endl;

	std::cout << "Hex - ";
	printf("%#x\n", *(reinterpret_cast<long long *>(p)));

	std::bitset<16> ptr2 ( *(reinterpret_cast<long long *>(p)) );
	std::cout << "Binary - " << ptr2 << std::endl;

	std::cout << "Decimal - ";
	printf("%d\n", *(reinterpret_cast<long long *>(p)));

	std::cout << "Double - ";
	printf("%.2e\n", *(reinterpret_cast<double *>(p)));
	std::cout << std::endl;
}

void	check64(int argc, char const *argv[])
{
	void	*ptr;

	std::cout << "----------------64----------------" << std::endl;
	std::cout << "Минимальное целое без знака: " << std::endl;
	ptr = &argv[++argc];
	printf64(ptr);

	std::cout << "Максимальное целое без знака: " << std::endl;
	ptr = &argv[++argc];
	printf64(ptr);

	std::cout << "Минимальное целое со знаком: " << std::endl;
	ptr = &argv[++argc];
	printf64(ptr);

	std::cout << "Максимальное целое со знаком: " << std::endl;
	ptr = &argv[++argc];
	printf64(ptr);

	std::cout << "Значение x: " << std::endl;
	ptr = &argv[++argc];
	printf64(ptr);

	std::cout << "Значение y: " << std::endl;
	ptr = &argv[++argc];
	printf64(ptr);

	std::cout << "Значение z: " << std::endl;
	ptr = &argv[++argc];
	printf64(ptr);
	std::cout << "----------------END64----------------" << std::endl;
}