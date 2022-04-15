#include "hedlab.h"

uint16_t down (uint16_t x) {
	uint16_t ans = 0;
	while ((x - ans) > 16) 
		ans += 16;
	return ans;
}
uint16_t up (uint16_t x) {
	uint16_t ans = 0;
	while (ans < x)
		ans += 16;
	return ans;
}

int main(){
	uint16_t m = 986;
	std::cout << "Down: " << down(m) << " Up: " << up(m) << '\n';
	return 0;
}
