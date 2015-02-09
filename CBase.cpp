
#include "stdafx.h"
#include "CBase.h"


#if CONFIG_HAS_DEF_CONSTRUCTOR
Base::Base()
{
	printf("Base::Base\r\n");
	pc = new char[10];
}
#endif

Base::Base(int i)
{
	pc = new char[20];
	printf("Base::Base %d\r\n",i);
}

Base::~Base()
{
	//zz// b2 = b0; 在析构函数的时候,多次delete同一个 pc
	// 私有变量pc 赋值成功了??,那new 了两次,难道new完之后,b2.pc又指向新的位置(b0.pc),那原来b2.pc所指的地方就无法析构了??
	delete pc;
}

int Base::get_idx()
{
	return 0;
}

