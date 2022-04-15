#include "hedlab.h"

void print16(void* p) 
{
	unsigned short up = *(reinterpret_cast<unsigned short*>(p));
	short sp = *(reinterpret_cast<short*>(p));

	std::bitset<16> upb(up);
	std::bitset<16> spb(sp);
	std::string supbn = upb.to_string();
	std::string sspbn = spb.to_string();

	std::cout << std::setw(16) << std::setfill('0') << std::hex << up << std::setw(16) << std::setfill(' ') << up << std::setw(16) << std::setfill('0') << supbn << std::setw(16) << std::setfill(' ') << sp << std::endl;
}
