#include "common.h"

class Pow_x_n {
public:
	typedef map<int, double> myMap;
	typedef myMap::const_iterator myMapIter;
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

		myMap imResults;
		imResults[0] = 1;
		imResults[1] = x;
		double dRet = x;
		int idx = 2;
		while (idx <= n)
		{

			imResults[idx] = imResults[idx>>1]*imResults[idx>>1];
			dRet = imResults[idx];
			idx = idx << 1;
		}

		if (idx == n)
		{
			return dRet;
		}
		else
		{
			idx  = idx >> 1;
			dRet = imResults[idx];
		}

		while (idx < n)
		{
			for (myMapIter iter = imResults.begin(); iter != imResults.end() && idx + iter->first <= n; ++iter)
			{
				idx += iter->first;
				dRet *= iter->second;
			}
		}

		return dRet;
	}

    double myPow(double x, int n) {
		return n<0? 1/_myPow(x, n) : _myPow(x, n);
    }
};