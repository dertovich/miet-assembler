#ifndef PROG_H
# define PROG_H

#include <iostream>
#include <fstream>
#include <cstddef>
#include <stdio.h>
#include <string>
#include <bitset>

int		data_size();

void	printf16(void	*p);
void	check16(int argc, char const *argv[]);

void	printf32(void	*p);
void	check32(int argc, char const *argv[]);

void	printf64(void	*p);
void	check64(int argc, char const *argv[]);

#endif