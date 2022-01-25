#include "main.hpp"

int balanceIndex(char selection, size_t sizeofArray, double arrayofBalances[])
{
	if(selection == '1')
	{
		int index {};
		double Balance {arrayofBalances[0]};
		for(size_t i {1}; i < sizeofArray; i++)
		{
			if(arrayofBalances[i] > Balance)
			{
				Balance = arrayofBalances[i];
				index = i;
			}
		}
		return index;
	}else {
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
}