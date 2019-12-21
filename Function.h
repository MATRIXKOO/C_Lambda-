#pragma once
#include "C_Lambda++.h"
#include "Type.h"
namespace function
{

union UNION_FUN
{
    void * FuncObj;
    void * LambdaObj;
    void * SingleFunc;
};
enum FunType
{
    FuncObj = 1,
    LambdaObj,
    SingleFunc
};


class BaseFunction
{
public:
    BaseFunction();
    BaseFunction(void*);
    //////////////////////////////////////////////
    //
    //       argv type bind
    //
    /////////////////////////////////////////////
    BaseFunction operator*();
    ////////////////////////////////////////////
    //
    //       ret typeid
    ////////////////////////////////////////////

    BaseFunction operator>>(BaseFunction);

private:
       UNION_FUN ret();
private:
    UNION_FUN FUN;
};


}