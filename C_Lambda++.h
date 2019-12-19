#ifndef CPP_LAMBDA
#define CPP_LAMBDA
#define _CRT_SECURE_NO_WARNINGS // cancle vs warning
#define ___ )()
#define Exp Explicit
#define ST_Lambda_CPP                                \
	int main()                                       \
	{                                                \
		Lambda();                                    \
		std::cout << "\nenter something to leave\n"; \
		getchar();                                   \
		return 0;                                    \
	}

#define V(type, varname) _value_<type> varname
#define V_(type, varname, value) _value_<type> varname(value)

void Lambda(); // Program start

///////////////////////////////////////
//           include
//////////////////////////////////////
#include <iostream>
#include <vector>
#include <memory>
#include <exception>
#include <functional>
#include <iostream>
#include <list>
#include <vector>
#include <string>

/////////////////////////////////////
//              using here
////////////////////////////////////
using namespace ::std::placeholders;

#endif CPP_LAMBDA