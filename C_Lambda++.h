#ifndef CPP_LAMBDA

#define _CRT_SECURE_NO_WARNINGS
#define ___ )()
#define Exp Explicit 
#define ST_Lambda_CPP			    \
int main()						    \
{								    \
	Lambda();					    \
	std::cout <<				    \
	"\nenter something to leave\n"; \
	getchar();			            \
	return 0;					    \
}								    \


#define V(type , varname)  _value_<type> varname
#define V_(type , varname , value) _value_<type> varname(value)




void Lambda();  // Program start




///////////////////////////////////////
//           include
//////////////////////////////////////
#include<iostream>
#include<functional>
#include<string>
/////////////////////////////////////
//              using here
////////////////////////////////////
using namespace::std::placeholders;


////////////////////////////////////
//              value 
////////////////////////////////////
using int_L = int;
using char_L = char;
using str_L = const char*;
using  var_id = unsigned long long ;
//using str_L_Normal = _str_<const char*>;

// todo //

// class str , now using string as _str_

template <typename T>
class _str_
{
	_str_() { std::cout << "wrong type here" << std::endl; };
};
template <>
class _str_<const char*>
{
public:
	void operator=(const char* enter_str)
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
class _value_<char_L>
{

private:
	char_L data;
	std::string var_name;
	var_id var_id_never_chage;
public:

	_value_(char_L init) { data = init; };
	
	char_L* Getdata()
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
		this->
	}

	void operator()(_value_<char_L> var_char)
	{
		data = *( var_char.Getdata());
	}

	void operator()(_value_<int_L> var_int)
	{

	}

};


/////////////////////////////////////////
//
//               type_id 
//
////////////////////////////////////////



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
//		fuc as a template class 
////////////////////////////////////////////


#endif // !