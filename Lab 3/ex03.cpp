#include "hedlab.h"

std::bitset<16> move_left(short x) 
{
	std::bitset<16> bit_unsigned_x(x);
	bit_unsigned_x <<= 1;
	return bit_unsigned_x;
}

std::bitset<16> move_right(short x) 
{
	std::bitset<16> bit_unsigned_x(x);
	bit_unsigned_x >>= 1;
	return bit_unsigned_x;
}

std::bitset<16> AND_15(short x) 
{
	std::bitset<16> bit_unsigned_x(x);
	std::cout << std::bitset<16>(15) << "=15" << '\n';
	bit_unsigned_x &= std::bitset<16>(15);
	return bit_unsigned_x;
}

std::bitset<16> AND_neg16(short x) 
{
	std::bitset<16> bit_unsigned_x(x);
	std::cout << std::bitset<16>(-16) << "=-16" << '\n';
	bit_unsigned_x &= std::bitset<16>(-16);
	return bit_unsigned_x;
}

int main()
{
	std::cout << "Task 4 for M" << '\n';
	std::cout << "SIGNED MOVE LEFT: " << '\n';
	short mlx = 986;
	std::cout << "Before" << '\n' << std::bitset<16>(mlx) << '\n';
	std::cout << "After" << '\n' << move_left(mlx) << '\n';
	std::cout << "" <<std::endl;

	std::cout << "UNSIGNED MOVE LEFT: " << '\n';
	unsigned short umlx = 986;
	std::cout << "Before" << '\n' << std::bitset<16>(umlx) << '\n';
	std::cout << "After" << '\n' << move_left(umlx) << '\n';
	std::cout << "" <<std::endl;

	std::cout << "SIGNED MOVE RIGHT: " << '\n';
	short mrx = 986;
	std::cout << "Before" << '\n' << std::bitset<16>(mrx) << '\n';
	std::cout << "After" << '\n' << move_left(mrx) << '\n';
	std::cout << "" <<std::endl;

	std::cout << "UNSIGNED MOVE RIGHT: " << '\n';
	unsigned short umrx = 986;
	std::cout << "Before" << '\n' << std::bitset<16>(umrx) << '\n';
	std::cout << "After" << move_left(umrx) << '\n';
	std::cout << "" <<std::endl;

	std::cout << "&15" << '\n';
	short bitmltp = 986;
	std::cout << "Before" << std::bitset<16>(bitmltp) << '\n';
	std::cout << "After" << AND_15(bitmltp) << '\n';
	std::cout << "" <<std::endl;

	std::cout << "&16" << '\n';
	short bitmltp2 = 986;
	std::cout << "Before" << std::bitset<16>(bitmltp2) << '\n';
	std::cout << "After" << AND_neg16(bitmltp2) << '\n';
	std::cout << "" <<std::endl;

	std::cout << "Task 4 for N" << '\n';

	std::cout << "SIGNED MOVE LEFT: " << '\n';
	short nlx = -126;
	std::cout << "Before" << '\n' << std::bitset<16>(nlx) << '\n';
	std::cout << "After" << '\n' << move_left(nlx) << '\n';
	std::cout << "" <<std::endl;

	std::cout << "SIGNED MOVE RIGHT: " << '\n';
	short nrx = -126;
	std::cout << "Before" << '\n' << std::bitset<16>(nrx) << '\n';
	std::cout << "After" << '\n' << move_left(nrx) << '\n';
	std::cout << "" <<std::endl;

	std::cout << "&15" << '\n';
	short bitnltp = -126;
	std::cout << "Before" << std::bitset<16>(bitnltp) << '\n';
	std::cout << "After" << AND_15(bitnltp) << '\n';
	std::cout << "" <<std::endl;

	std::cout << "&16" << '\n';
	short bitnltp2 = -126;
	std::cout << "Before" << std::bitset<16>(bitnltp2) << '\n';
	std::cout << "After" << AND_neg16(bitnltp2) << '\n';
	std::cout << "" <<std::endl;

	return (0);
}
