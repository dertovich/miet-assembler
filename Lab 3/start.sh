printf "1 Задание\n"
printf "+=====================+\n"
g++ hedlab.h print16.cpp print32.cpp ex00.cpp -o res00
./res00
printf "\n"

printf "2 Задание\n"
printf "+=====================+\n"
g++ hedlab.h print16.cpp print32.cpp ex01.cpp -o res01
./res01
printf "\n"

printf "3 Задание\n"
printf "+=====================+\n"
g++ hedlab.h print16.cpp print32.cpp ex02.cpp -o res02
./res02
printf "\n"

printf "4 Задание\n"
printf "+=====================+\n"
g++ hedlab.h ex03.cpp -o res03
./res03
printf "\n"

printf "5 Задание\n"
printf "+=====================+\n"
g++ hedlab.h ex04.cpp -o res04
./res04
printf "\n"

printf "6 Задание\n"
printf "+=====================+\n"
g++ hedlab.h ex05.cpp -o res05
./res05
printf "\n"

rm -rf res00.exe res01.exe res02.exe res03.exe res04.exe res05.exe
