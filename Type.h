#pragma once

#include "C_Lambda++.h"

typedef 

class String
{
public:
	String() = default;
	String(const char* s);
	String(String &s);
	String& operator=(String& rhs);
	String& operator=(const char* rhs);
	String operator+( String & rhs);
	String operator+( const char* rhs);
	String  operator*(int times);
	String operator[](int i);
	void show() 
	{ 
		for (auto a : string) 
			std::cout << a; 
		std::cout << std::endl;
	}
	//bool in(String& rhs , const char* lhs); // todo use kmp

	size_t Getlenth() { return string.size(); };
private:
	std::vector<char> string;
};

//template <typename value_type>
//class type
//{
//public:
//	type_value() { std::cout << std::cout << " it is a empty value" << std::endl; }
//
//};