#include "common.h"

class SubstringwithConcatenationofAllWords {
public:
	vector<int> findSubstring(string S, vector<string> &L) {
		vector<int> vRet;
		if(S.size() == 0 || L.size() == 0 || L[0].size() == 0)
			return vRet;

		int nWordLen = L[0].size();
		int nStringLen = S.size();
		int nWordCount = L.size();
		int nCount = 0;
		map<string, int> theMap;
		for(int i = 0; i < nWordCount; ++i)
		{
			theMap[L[i]]++;
		}
		map<string, int> curMap;

		for (int i = 0; i < nWordLen; ++i)
		{
			curMap.clear();
			int nLeftIdx = i;
			nCount = 0;
			for (int j = i; j <= nStringLen-nWordLen; j += nWordLen)
			{
				string sCurWord = S.substr(j, nWordLen);
				if(theMap.find(sCurWord) != theMap.end())
				{
					curMap[sCurWord]++;
					if (curMap[sCurWord] <= theMap[sCurWord])
					{
						nCount++;
					}
					else
					{
						while (curMap[sCurWord] > theMap[sCurWord])
						{
							curMap[S.substr(nLeftIdx, nWordLen)]--;
							if (curMap[S.substr(nLeftIdx, nWordLen)] < theMap[S.substr(nLeftIdx, nWordLen)])
							{
								nCount--;
							}
							nLeftIdx += nWordLen;
						}
					}

					if(nCount == nWordCount)
					{
						vRet.push_back(nLeftIdx);
						nCount--;
						curMap[S.substr(nLeftIdx, nWordLen)]--;
						nLeftIdx += nWordLen;
					}
				}
				else
				{
					curMap.clear();
					nLeftIdx = j+nWordLen;
					nCount = 0;
				}
			}
		}

		return vRet;
	}
};