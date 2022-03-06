#include "main.hpp"

int balanceIndex(char selection, size_t sizeofArray, Account arrayofAccounts[])
{
	int index {};
	double balance {arrayofAccounts[0].userBalance};//did not want to use a nested for loop so initialized balance to index 0 of arrayofBalances
	for(size_t i {1}; i < sizeofArray; i++)
	{
		if(selection == '1' && arrayofAccounts[i].userBalance > balance)//if array of balances at index i is greater than balance(because we want the largest) then assign it to balance and assign i to index
		{
			balance = arrayofAccounts[i].userBalance;
			index = i;
		}else if(selection == '2' && arrayofAccounts[i].userBalance < balance) {
			balance = arrayofAccounts[i].userBalance;
			index = i;
		}
	}
	return index;
}