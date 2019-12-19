#include "Type.h"

String::String(const char* s)
{
	if (s == NULL || *s == 0);
	else
	{
		for (int i = 0;; i++)
		{
			if (*(s + i) == 0)
				break;
			string.push_back(*(s + i));
		}
	}
}

String::String(String& s)
{
	string = s.string;
}

String& String::operator=(String& rhs)
{
	string = rhs.string;
	return *this;
}

String& String::operator=(const char* rhs)
{
	if (rhs == NULL || *rhs == 0);
	else
	{
		for (int i = 0;; i++)
		{
			string.push_back(*(rhs + i));
			if (*(rhs + i + i) == 0)
				break;

		}
	}
	return *this;

}

String String::operator+(String& rhs)
{
	String ret(*this);
	for (auto a : rhs.string)
		ret.string.push_back(a);
	return ret;
}

String String::operator+(const char* rhs)
{

	if (rhs == NULL || *rhs == 0);
	String ret(*this);
	for (int i = 0; ; i++)
	{
		ret.string.push_back(*(rhs + i));
		if (*(rhs + 1 + i) == 0)
			break;
	}
	return ret;
}

String String::operator*(int times)
{
	String  ret;
	if (times > 0)
		while (times--)
		{
			for (auto a : string)
				ret.string.push_back(a);
			return ret;
		}
	if (times < 0)
	{
		times = -times;
		while (times--)
			std::for_each(string.cbegin(), string.cend(), [&ret](char a) { ret.string.push_back(a); });
			return ret;
	}
	return ret;
}

String String::operator[](int i)
{
	auto single_char = string[i];
	String ret(&single_char);
	return ret;
}

int main()
{
	String a("hello , world!");
	String b("hello??");
	String c(a);
	String d = "???";
	a.show();
	b.show();
	c.show();
	d.show();
	(a + b).show();
	(a * 4).show();
	(c + "hello again!").show();


	getchar();
	return 0;

}