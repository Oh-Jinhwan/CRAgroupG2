class Cal {

public:
	int getMinus(int a, int b)
	{
		return  a - b;
	}
public :
	int getZegop(int a)
	{
		return a * a;
	}

	int getDivide(int a, int b)
	{
		if (b != 0) return a / b;
		return 0;
	}
};