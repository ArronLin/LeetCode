#include "common.h"

const string vDigitMappings[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

class LetterCombinationsofaPhoneNumber {
public:
	void buildString(int nPos, int nSize, string& strToBuild, const string& digits, vector<string>& vRet)
	{
		if(nPos == nSize)
		{
			vRet.push_back(strToBuild);
			return;
		}

		for(int i = 0; i < vDigitMappings[digits[nPos]-'0'].size(); ++i)
		{
			strToBuild[nPos] = vDigitMappings[digits[nPos]-'0'][i];
			buildString(nPos+1, nSize, strToBuild, digits, vRet);
		}
	}

    vector<string> letterCombinations(string digits) {
		vector<string> vRet;
		if(digits.size() == 0)
			return vRet;

		string strToBuild(digits.size(), ' ');
		buildString(0, digits.size(), strToBuild, digits, vRet);

		return vRet;
    }
};