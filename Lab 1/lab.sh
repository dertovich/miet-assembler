g++ prog_1.cpp d_size.cpp check16.cpp check32.cpp check64.cpp
#./a.exe

./a.exe 0 65535 −32768 32767 6 -3

#./a.exe 0 4294967295 −2147483648 2147483647 0x8A8B8C8D 6.0 -3.0

#./a.exe 0 18446744073709551615 −9223372036854775808 9223372036854775807 0x8A8B8C8D 6.00 -3.00
rm a.exe
printf ""

#g++ print_dump.cpp -o out
#./out 0x8A8B8C8D 6 -3
#rm out