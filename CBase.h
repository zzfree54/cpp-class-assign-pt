

#define CONFIG_HAS_DEF_CONSTRUCTOR 1

class Base
{
public:
	//zz// ���캯��,�������������з���ֵ,void������
#if CONFIG_HAS_DEF_CONSTRUCTOR
	Base();
#endif

	Base(int i);
	//zz// ��������������������������,����Ϊ��
	~Base();

public:
	int get_idx();
	int m_idx;

private:
	char *pc;
};