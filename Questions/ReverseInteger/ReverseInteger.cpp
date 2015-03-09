#include "common.h"

class ReverseInteger {
public:
    int reverse(int x) {
        if(x == 0)
			return 0;

		queue<int> myStack;
		while(x)
		{
			myStack.push(x%10);
			x = x/10;
		}

		int nRet = 0;
		while(!myStack.empty())
		{
			int nVal = myStack.front();
			if(myStack.size() == 1)
			{
				if(nRet > 214748364 || nRet < -214748364)
				{
					return 0;
				}
				else if((nRet == 214748364 && nVal > 7) || (nRet == -214748364 && nVal < -8))
				{
					return 0;
				}
			}
			myStack.pop();
			nRet *= 10;
			nRet += nVal;
		}

		return nRet;
    }
};