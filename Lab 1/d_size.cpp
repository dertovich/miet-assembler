#include "prog.h"

int	data_size()
{
	std::ofstream	out; // поток для записи в файлик

	out.open("data_size.txt"); // открываем файлик
	if(out.is_open())
	{
		out << "Char:\t\t\t" << sizeof(char) << "bytes" << std::endl;
		out << "Signed char:\t\t" << sizeof(signed char) << "bytes" << std::endl;
		out << "Unsigned char:\t\t" << sizeof(unsigned char) << "bytes" << std::endl;
		out << "Wchar_t:\t\t" << sizeof(wchar_t) << "bytes" << std::endl;
		out << "Short:\t\t\t" << sizeof(short) << "bytes" << std::endl;
		out << "Int:\t\t\t" << sizeof(int) << "bytes" << std::endl;
		out << "Unsigned int:\t\t" << sizeof(unsigned int) << "bytes" << std::endl;
		out << "Long:\t\t\t" << sizeof(long) << "bytes" << std::endl;
		out << "Unsigned long:\t\t" << sizeof(unsigned long) << "bytes" << std::endl;
		out << "Long long:\t\t" << sizeof(long long) << "bytes" << std::endl;
		out << "Unsigned long long:\t" << sizeof(unsigned long long) << "bytes" << std::endl;
		out << "Float:\t\t\t" << sizeof(float) << "bytes" << std::endl;
		out << "Double:\t\t\t" << sizeof(double) << "bytes" << std::endl;
		out << "Long double:\t\t" << sizeof(long double) << "bytes" << std::endl;
		out << "Size_t:\t\t\t" << sizeof(size_t) << "bytes" << std::endl;
		out << "Ptrdiff_t:\t\t" << sizeof(ptrdiff_t) << "bytes" << std::endl;
		out << "Void*:\t\t\t" << sizeof(void*) << "bytes" << std::endl;
		out << "Char*:\t\t\t" << sizeof(char*) << "bytes" << std::endl;
		out << "Int*:\t\t\t" << sizeof(int*) << "bytes" << std::endl;
		out << "Unsigned int*:\t\t" << sizeof(unsigned int*) << "bytes" << std::endl;
	}
	else
		return (1);
	out.close();
	return (0);
}