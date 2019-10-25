#ifndef CPP_LAMBDA

#define _CRT_SECURE_NO_WARNINGS // cancle vs warning
#define ___ )()
#define Exp Explicit
#define ST_Lambda_CPP                                         \
	int main()                                                \
	{														  \
		  \
		Lambda();											  \
		std::cout << "\nenter something to leave\n";		  \
		getchar();											  \
		return 0;											  \
	}                               

#define V(type, varname) _value_<type> varname
#define V_(type, varname, value) _value_<type> varname(value)

void Lambda(); // Program start

///////////////////////////////////////
//           include
//////////////////////////////////////
#include <functional>
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <map>
/////////////////////////////////////
//              using here
////////////////////////////////////
using namespace ::std::placeholders;

////////////////////////////////////
//              value
////////////////////////////////////
using int_L = int;
using char_L = char;
using str_L = const char *;
using var_id = unsigned long long;

using fuc_pointer = void *; // just for call once


//using str_L_Normal = _str_<const char*>;

// todo //

// class str , now using string as _str_



template <typename T>
class _value_;

union var_pointer 
{
	_value_<char_L> *generic_pointer_to_char;
	_value_<int_L> *generic_pointer_to_int;
	_value_<str_L> *generic_pointer_to_str_L;
};





template <typename T>
class _str_
{
	_str_() { std::cout << "wrong type here" << std::endl; };
};
template <>
class _str_<const char *>
{
public:
	void operator=(const char *enter_str)
	{
		_str_self = enter_str;
	}

private:
	std::string _str_self;
};

//////////////////////////////////
//
//          type trans
//
//		todo to tran all type
//
////////////////////////////////////////////

////////////////////////////////////////////
//
//
//            Assign
//		use _value_ a(2333)
//      bad solution
//
//      use V<typename>(varname) to init a var
//
////////////////////////////////////////////

template <typename T>
class _value_
{
	_value_() { std::cout << "wrong type here" << std::endl; };
};


template <>
class _value_<char_L>;

template <>
class _value_<char_L>
{

private:
	char_L data;
	std::string var_name;
	var_id var_id_never_chage;

public:
	_value_(char_L init) { data = init; };

	char_L *Getdata()
	{
		return &data;
	}

	///////////////////////////////////////////////////
	//
	//          reload ()
	//
	//////////////////////////////////////////////////

	char_L operator()() { return data; };

	void operator()(char_L char_data)
	{
		data = char_data;
		var_name = "char_L";
	}

	void operator()(int_L int_data)
	{
	}

	void operator()(_value_<char_L> var_char)
	{
		data = *(var_char.Getdata());
	}

	void operator()(_value_<int_L> var_int)
	{
	}
};

template <>
class _value_<int_L>
{

private:
	char_L data;
	std::string var_name;
	var_id var_id_never_chage;

public:
	_value_(int_L init) { data = init; };

	char_L *Getdata()
	{
		return &data;
	}

	///////////////////////////////////////////////////
	//
	//          reload ()
	//
	//////////////////////////////////////////////////

	int_L operator()() { return data; };

	void operator()(int_L int_data)
	{
		data = int_data;
		var_name = "int_L";
	}

	void operator()(char_L char_data)
	{
	}

	void operator()(_value_<int_L> var_int)
	{
		data = *(var_int.Getdata());
	}

	void operator()(_value_<char_L> var_char)
	{
	}
};


/////////////////////////////////////////
//
//     value pool , only one Instance
//
////////////////////////////////////////

class ValuePool
{
public:
	var_id RetVarId(union var_pointer)
	{

		return 
	}
private:
	std::map<var_id, union var_pointer > G_hashmap;  //  map var to var_pointer
    // diff var_vec in here 
	std::vector <int_L>  
	
};
////////////////////////////////
//
//			io
//
///////////////////////////////
namespace Fuc
{
auto Exprt = std::bind(printf, _2, _1);

///////////////////////////////////////////
//
//     Expprint is print for one value
//		todo rewrite as a class
//
//		using like Exprt(type,"stm")
//
//////////////////////////////////////////
auto ExScf = std::bind(scanf, _2, _1);
/////////////////////////////////////////
//as follow
/////////////////////////////////////////

}; 

/////////////////////////////////////////////
//		specify
//			todo
//		fuc as a template fuc
////////////////////////////////////////////

/*
namespace SpeFuc
{

std::vector<fuc_pointer> vec_for_fuc_pointer;

template <typename _ret_var_, typename fuctype, typename... Args>
auto RetRecurLambda(T... Args, fuctye fucpoint)
	-> _ret_var_ (*)(T... Args)
{
	static _ret_var_ RecurLambda = [](Args) { std::bind(fucpoint) };

	return RecurLambda;
}

#define for_each(do_something) \
								\						   
	std::bind();               \
								\
	}                          \
	;

//////////////////////////////////////////
//
//    return a fuc var
//    recursive lambda fuc
//
/////////////////////////////////////////
*/

/////////////////////////////////////////
//
//	   vector use this store data
//      todo
////////////////////////////////////////

///////////////////////////////////////
//
//		extend loop
//
//////////////////////////////////////

#define loop(do_something, until) \
while(!until)                     \
	{                             \
		do_something();           \
	}

#endif // !CPP_LAMBDA
