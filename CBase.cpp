
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
	//zz// b2 = b0; ������������ʱ��,���deleteͬһ�� pc
	// ˽�б���pc ��ֵ�ɹ���??,��new ������,�ѵ�new��֮��,b2.pc��ָ���µ�λ��(b0.pc),��ԭ��b2.pc��ָ�ĵط����޷�������??
	delete pc;
}

int Base::get_idx()
{
	return 0;
}

