#include "prog.h"

void	printf16(void	*p)
{
	std::cout << "Hex - ";
	printf("%#x\n", *(reinterpret_cast<unsigned short *>(p)));

	std::bitset<16> ptr1 ( *(reinterpret_cast<unsigned short *>(p)) );
	std::cout << "Binary - " << ptr1 << std::endl;

	std::cout << "Decimal - ";
	printf("%d\n", reinterpret_cast<unsigned short *>(p));
	std::cout << std::endl;

	std::cout << "Hex - ";
	printf("%#x\n", *(reinterpret_cast<short *>(p)));

	std::bitset<16> ptr2 ( *(reinterpret_cast<short *>(p)) );
	std::cout << "Binary - " << ptr2 << std::endl;

	std::cout << "Decimal - ";
	printf("%d\n", *(reinterpret_cast<short *>(p)));
	std::cout << std::endl;
}

void	check16(int argc, char const *argv[])
{
	void	*ptr;

	std::cout << "----------------16----------------" << std::endl;
	std::cout << "Минимальное целое без знака: " << std::endl;
	ptr = &argv[++argc];
	printf16(ptr);

	std::cout << "Максимальное целое без знака: " << std::endl;
	ptr = &argv[++argc];
	printf16(ptr);

	std::cout << "Минимальное целое со знаком: " << std::endl;
	ptr = &argv[++argc];
	printf16(ptr);

	std::cout << "Максимальное целое со знаком: " << std::endl;
	ptr = &argv[++argc];
	printf16(ptr);

	std::cout << "Значение y: " << std::endl;
	ptr = &argv[++argc];
	printf16(ptr);

	std::cout << "Значение z: " << std::endl;
	ptr = &argv[++argc];
	printf16(ptr);
	std::cout << "----------------END16----------------" << std::endl;
}