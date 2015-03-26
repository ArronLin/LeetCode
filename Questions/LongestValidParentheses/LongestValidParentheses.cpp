#include "common.h"

class LongestValidParentheses {
public:
	int longestValidParentheses_DP(string s) {
		if (s.size() <= 1)
		{
			return 0;
		}

		int nSize = s.size();
		vector<int> vDP(nSize, 0);
		int nMaxCount = 0;

		for (int i = 1; i < nSize; i++)
		{
			if (s.at(i) == ')')
			{
				int j = i-vDP[i-1]-1;
				if (j >= 0 && s.at(j) == '(')
				{
					vDP[i] = vDP[i-1]+2+(j-1>=0? vDP[j-1] : 0);
					if (vDP[i] > nMaxCount)
					{
						nMaxCount = vDP[i];
					}
				}
			}
		}

		return nMaxCount;
	}

	int longestValidParentheses(string s) {
		if (s.size() <= 1)
		{
			return 0;
		}

		int nSize = s.size();
		vector<int> vMaxCount(nSize, 0);
		stack<int> myStack;
		int nMaxCount = 0;
		for (int i = 0; i < nSize; i++)
		{
			if (s.at(i) == '(')
			{
				myStack.push(i);
			}
			else
			{
				if (!myStack.empty())
				{
					int nLeftIdx = myStack.top();
					myStack.pop();
					vMaxCount[i] = i-nLeftIdx+1+(nLeftIdx-1>=0? vMaxCount[nLeftIdx-1] : 0);
					if (vMaxCount[i] > nMaxCount)
					{
						nMaxCount = vMaxCount[i];
					}
				}
			}
		}

		return nMaxCount;
	}
};