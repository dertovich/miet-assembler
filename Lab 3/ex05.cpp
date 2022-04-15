#include "hedlab.h"

void print32(void* p) {
	unsigned int up = *(reinterpret_cast<unsigned int *>(p));
	int sp = *(reinterpret_cast<int *>(p));
	std::bitset<32> upb(up);
	std::bitset<32> spb(sp);
	std::string supbn = upb.to_string();
	std::string sspbn = spb.to_string();
	std::cout << std::setw(32) << std::setfill('0') << std::hex << up << std::setw(32) << std::setfill(' ') << std::dec << up << std::setw(32) << std::setfill('0') << supbn << std::setw(32) << std::setfill(' ') << sp << std::endl;
}

template<class T>
void inc(T& t){
	t++;
}

template<class T>
void dec(T& t){
	t--;
}

template<class T>
void work(T& t) {
	void* pt = &t;
	std::cout << "Before: ";
	print32(pt);
	std::cout << " Increment: ";
	inc(t);
	print32(pt);
	std::cout << " Decrement: ";
	dec(t);
	print32(pt);
	std::cout << "" << std::endl;
}

int main(){

	int32_t m = 986;
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
