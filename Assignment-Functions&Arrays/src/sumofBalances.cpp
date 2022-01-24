#include "main.hpp"

double sumofBalances(size_t sizeofArray, double arrayofBalances[])
{
	double balanceSum {};
	for(size_t i {0}; i < sizeofArray; i++)
		balanceSum += arrayofBalances[i];
	return balanceSum;
}