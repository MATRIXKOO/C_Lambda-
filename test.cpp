#include "C_Lambda++.h"

////////////////////////////////
//			
//       hello world
//
///////////////////////////////
ST_Lambda_CPP;


void Lambda()
{
	(
	[]
	{
		V_(char_L, test, 'c');

		Fuc::Exprt( test() , "%c");
	}
	___;

	

}

