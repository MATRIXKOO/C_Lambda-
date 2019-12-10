#include "MemoryPool.h"
#include <iostream>
int main()
{
	memory_pool A;
	auto a = A.ptrs_to_var_vec[0];
	auto b =   static_cast<std::vector<int>* >(a);
	auto &c = *b;
	c.push_back(233);
	std::cout << (*b)[0];
	getchar();
	return 0;
}