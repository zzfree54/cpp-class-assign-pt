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
	//zz// ��Ϊû�м̳�,û��Ĭ���޲����Ĺ��캯��,�����
	class Base b0;
#endif
	//zz// û��ȱʡ���޲������캯��,ʹ�ô������Ĺ��캯��,������ڶ������������ָ������(����)
	//zz// ��ȱʡ���޲������캯��,Ҫ���ô�������,Ҳ��������(����)
	class Base b1(5);

	//zz// private ˽�б���pcҲ�ܸ�ֵ�ɹ�??
#if 1
	class Base b2 = b0;
#else
	class Base b2;
	b2 = b0;
#endif	

	return 0;
}

