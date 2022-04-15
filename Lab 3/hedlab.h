#ifndef HEDLAB_H
# define HEDLAB_H

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <bitset>
#include <string>
#include <climits>
#include "math.h"

struct Exp{
	int sign_z;
	unsigned int usign_z;
};

void print16(void* p);
void print32(void* p);

#endif