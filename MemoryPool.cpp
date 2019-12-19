#include<iostream>
#include<vector>
#include<memory>
#include<exception>

struct A
{
	int id;
	int num;
	A(int id = 0 , int num = 0) :
		id(id) , num(num){}
};

struct B
{
	int id;
	int num;
	B(int id = 0, int num = 0) :
		id(id), num(num) {}
};


union SOMEUNION
{
	A* a;
	B* b;
};

typedef SOMEUNION* P_UNION;
class memory_pool
{
public:
	memory_pool()  {};
	memory_pool(memory_pool& e) = delete;

	size_t GetSize();
	void memory_pool_add(SOMEUNION _new_pointer)
	{
		try
		{
			std::exception e("NULL !");
			if ( _new_pointer.a || _new_pointer.b)
				throw e;
		}
		catch(std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		
		//pointers.resize(GetSize() + 1);
		pointers.push_back(_new_pointer);
		_new_pointer.a->id = GetSize();
	}
private:
	typedef std::vector<P_UNION>::iterator UNION_iter;
	std::vector<SOMEUNION> pointers;
};
size_t memory_pool::GetSize()
{
	return pointers.size();
}
int main()
{
	memory_pool M;
	A a(1, 2);
	B b(2, 4);
	SOMEUNION ua , ub;
	ua.a = &a;
	ub.b = &b;
	M.memory_pool_add(ua);
	M.memory_pool_add(ub);
	std::cout << M.GetSize() << std::endl;
	getchar();
	return 0;
}