#include "common.h"

class GenerateParentheses {
public:
	void _generateParenthesis(int nLeftIdx, int nRightIdx, int n, string strToBuild, vector<string>& vRet)
	{
		if(nLeftIdx == n)
		{
			while(nRightIdx < n)
			{
				strToBuild += ')';
				nRightIdx++;
			}
			vRet.push_back(strToBuild);
			return;
		}

		if(nLeftIdx < n)
		{
			_generateParenthesis(nLeftIdx+1, nRightIdx, n, strToBuild+'(', vRet);
		}
		if(nLeftIdx > nRightIdx)
		{
			_generateParenthesis(nLeftIdx, nRightIdx+1, n, strToBuild+')', vRet);
		}
	}

    vector<string> generateParenthesis(int n) {
        vector<string> vRet;
		if(n <= 0)
			return vRet;

		string strToBuild;
		_generateParenthesis(0, 0, n, strToBuild, vRet);

		return vRet;
    }
};