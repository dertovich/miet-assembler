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

void inc(void* p){
	unsigned int* ans = (static_cast<unsigned int *>(p));
	*ans = *ans + 1;
}

void dec(void* p){
	unsigned int* ans = (static_cast<unsigned int *>(p));
	*ans = *ans - 1;

}

template<class T>
void work(T& t) {
	void* pt = &t;
	
	std::cout << "Before: " << std::endl; 
	print32(pt);
	std::cout << " Increment: " << std::endl;
	inc(pt);
	print32(pt);
	std::cout << " Decrement: " << std::endl;
	dec(pt);
	print32(pt);
	std::cout << " " << std::endl;
}

int main(){
	int32_t m = 986;
	void* pt = &m;
	work(m);

	int32_t n = -126;
	work(n);

	float a = 0;
	work(a);

	float b = 1;
	work(b);

	float c = 12345678;
	work(c);
	
	float d = 123456789;
	work(d);
	
	int32_t zero = 0;
	work(zero);
	
	uint32_t umax = UINT_MAX;
	work(umax);
	
	int32_t smin = INT_MIN;
	work(smin);
	
	int32_t smax = INT_MAX;
	
	work(smax);
	return 0;
}