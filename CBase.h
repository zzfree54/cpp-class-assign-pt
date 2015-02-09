

#define CONFIG_HAS_DEF_CONSTRUCTOR 1

class Base
{
public:
	//zz// 构造函数,析构函数不能有返回值,void都不行
#if CONFIG_HAS_DEF_CONSTRUCTOR
	Base();
#endif

	Base(int i);
	//zz// 析构函数连函数参数都不能有,必须为空
	~Base();

public:
	int get_idx();
	int m_idx;

private:
	char *pc;
};