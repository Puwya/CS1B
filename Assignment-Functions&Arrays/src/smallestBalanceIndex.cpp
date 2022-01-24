#include "main.hpp"

int smallestBalanceIndex(size_t sizeofArray, double arrayofBalances[])
{
	int index {};
	double Balance {arrayofBalances[0]};
	for(size_t i {1}; i < sizeofArray; i++)
	{
		if(arrayofBalances[i] < Balance)
		{
			Balance = arrayofBalances[i];
			index = i;
		}
	}
	return index;
}