class Cal {

public:

	int getSumSum(int a, int b, int c)
	{
		return a + b + c;
	}

	int getMinus(int a, int b)
	{
		return  a - b;
	}

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