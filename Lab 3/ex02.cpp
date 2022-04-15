#include "hedlab.h"

int main(void)
{
	std::cout << "Signed multiplication by 2:" << std::endl;
	short a = -43;
	std::cout << "A:" << std::endl;
	print16(&a);
	std::cout << "A*2:" << std::endl;
	a = short(a * 2);
	print16(&a);
	std::cout << "==============================" <<std::endl;
	std::cout << "" <<std::endl;

	std::cout << "Unsigned multiplication by 2:" << std::endl;
	std::cout << "B:" << std::endl;
	unsigned short b = 27;
	print16(&b);
	std::cout << "B*2" << std::endl;
	unsigned short b2 = (unsigned short)(b2 * 2);
	print16(&b2);
	std::cout << "==============================" <<std::endl;
	std::cout << "" <<std::endl;

	std::cout << "Signed division by 2: " << std::endl;
	std::cout << "C:" << std::endl;
	short c = -26;
	print16(&c);
	c = (short) (c / 2);
	std::cout << "C/2:" << std::endl;
	print16(&c);
	std::cout << "==============================" <<std::endl;
	std::cout << "" <<std::endl;

	std::cout << "Unsigned division by 2: " << std::endl;
	unsigned short d = 62;
	std::cout << "D:" << std::endl;
	print16(&d);
	d = (unsigned short) (d / 2);
	std::cout << "D/2:" << std::endl;
	print16(&d);
	std::cout << "==============================" <<std::endl;
	std::cout << "" <<std::endl;

	std::cout << "E mod 16: " << std::endl;
	unsigned short e = 43;
	std::cout << "E:" << std::endl;
	print16(&e);
	e = (unsigned short) (e % 16);
	std::cout << "E mod:" << std::endl;
	print16(&e);
	std::cout << "==============================" <<std::endl;
	std::cout << "" <<std::endl;

	std::cout << "Round F to 16x" << std::endl;
	unsigned short f = 52;
	std::cout<<"F:\n";
	print16(&f);
	f = (unsigned short) (f - f % 16);
	std::cout<<"F to 16x:\n";
	print16(&f);

	return (0);
}