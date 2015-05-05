#include "common.h"

class Pow_x_n {
public:
	double _myPow(double x, int n)
	{
		if (n == 0)
		{
			return 1;
		}

		if (n == 1)
		{
			return x;
		}

		double dHalf = _myPow(x, n/2);
		return n%2? dHalf*dHalf*x : dHalf*dHalf;
	}

    double myPow(double x, int n) {
		return n<0? 1/_myPow(x, n) : _myPow(x, n);
    }
};