#include "common.h"

class LongestCommonPrefix {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string sRet = "";
		if(strs.size() == 0)
			return sRet;

		int nShortestLen = strs[0].size();
		for(int i = 1; i < strs.size(); ++i)
		{
			if(strs[i].size() < nShortestLen)
				nShortestLen = strs[i].size();
		}

		for(int i = 0; i < nShortestLen; ++i)
		{
			char cCommon = strs[0].at(i);
			for(int j = 1; j < strs.size(); ++j)
			{
				if(strs[j].at(i) != cCommon)
					return strs[0].substr(0, i);
			}
		}

		return strs[0].substr(0, nShortestLen);
    }
};