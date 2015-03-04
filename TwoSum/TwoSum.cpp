
#include "common.h"

class TwoSum {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int i = 1;
        multimap<int, int> temp;
        //for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++, i++)
		for(size_t i = 0; i < numbers.size(); ++i)
        {
            temp.insert(pair<int, int>(numbers[i], i+1));
        }

        int iIndex1 = 0, iIndex2 = 0;
        while(temp.size() > 1)
        {
            int keyval = temp.begin()->first;
            iIndex1 = temp.begin()->second;

            temp.erase(temp.begin());
            multimap<int, int>::iterator fIt = temp.find(target - keyval);
            if(fIt != temp.end())
            {
                iIndex2 =  fIt->second;
                break;
            }
        }

        vector<int> rt;
        if (iIndex1 < iIndex2)
        {
            rt.push_back(iIndex1);
            rt.push_back(iIndex2);
        }
        else
        {
            rt.push_back(iIndex2);
            rt.push_back(iIndex1);
        }

        return rt;
    }
};
