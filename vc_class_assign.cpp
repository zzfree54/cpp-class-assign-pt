// vc_class_assign.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CBase.h"

int main(int argc, char* argv[])
{
	printf("Hello World!\n");

	printf("char size is %d\n",sizeof(char));
	printf("short size is %d\n",sizeof(short));
	printf("int size is %d\n",sizeof(int));
	printf("long size is %d\n",sizeof(long));
	printf("float size is %d\n",sizeof(float));
	printf("double size is %d\n",sizeof(double));

#if CONFIG_HAS_DEF_CONSTRUCTOR
	//zz// 因为没有继承,没有默认无参数的构造函数,会出错
	class Base b0;
#endif
	//zz// 没有缺省的无参数构造函数,使用带参数的构造函数,则必须在对象名后加括号指出参数(参数)
	//zz// 有缺省的无参数构造函数,要调用带参数的,也是用括号(参数)
	class Base b1(5);

	//zz// private 私有变量pc也能赋值成功??
#if 1
	class Base b2 = b0;
#else
	class Base b2;
	b2 = b0;
#endif	

	return 0;
}

