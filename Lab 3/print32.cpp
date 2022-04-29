#include "hedlab.h"

void print32(void* p) 
{
	unsigned int up = *(reinterpret_cast<unsigned int*>(p));
	int sp = *(reinterpret_cast<int*>(p));

	std::bitset<32> upb(up);
	std::bitset<32> spb(sp);
	std::string supbn = upb.to_string();
	std::string sspbn = spb.to_string();

	std::cout << "HEX: " << std::setw(32) << std::setfill('0') << std::hex << up << std::endl;
	std::cout << "DEC: " << std::setw(32) << std::setfill(' ') << up << std::endl;
	std::cout << "BIN: " << std::setw(32) << std::setfill('0') << supbn << std::endl;
	std::cout << "" << std::endl;
}
