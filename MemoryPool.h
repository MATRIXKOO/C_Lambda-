#include<vector>
#include<string>
using int_L = int;
using char_L = char;
using str_L = const char*;
using  var_id = unsigned long long;




enum type_id
{
	id_int_L = 1,
	id_char_L,
	id_str_L,
	id_var_id
};



class memory_pool
{
public:
	memory_pool()
	{
		MemoryInit();
	};
	memory_pool(memory_pool& i) = delete;

	////////////////////////////////////////////////////////////
	//				for each type , i will give 
	//				vector to store
	//
	////////////////////////////////////////////////////////////

	unsigned int var_counter;

	template<typename var_type>
	std::vector<var_type>* MakeVec()
	{
		auto pnew_vec = new std::vector<var_type>;
		return pnew_vec;
	}
	void MemoryInit()
	{
		ptrs_to_var_vec.push_back(MakeVec<int>());
		ptrs_to_var_vec.push_back(MakeVec<char>());
		ptrs_to_var_vec.push_back(MakeVec<std::string>());
	}
public:
	std::vector<void*> ptrs_to_var_vec;
};

