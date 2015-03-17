#include "common.h"

class LongestCommonPrefix {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string sRet = "";
		if(strs.size() == 0)
			return sRet;

		size_t nShortestLen = strs[0].size();
		for(size_t i = 1; i < strs.size(); ++i)
		{
			if(strs[i].size() < nShortestLen)
				nShortestLen = strs[i].size();
		}

		for(size_t i = 0; i < nShortestLen; ++i)
		{
			char cCommon = strs[0].at(i);
			for(size_t j = 1; j < strs.size(); ++j)
			{
				if(strs[j].at(i) != cCommon)
					return strs[0].substr(0, i);
			}
		}

		return strs[0].substr(0, nShortestLen);
    }
};