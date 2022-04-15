#include "hedlab.h"

int main() 
{
	short n = 12;
	void* p = &n;

	print16(p);
	print32(p);

	return 0;
}
