gcc print_dump.cpp -o dump
gcc multi_d_size.cpp -o size
gcc dump_3.cpp -o dump_3

./size
./dump 0x8A8B8C8D 6 -3
./dump_3 "abczklmn" "абвёклмн"
rm dump size dump_3