#include "common.h"

class InsertInterval {
public:
	typedef vector<Interval> VInterval;

	    vector<Interval> merge(vector<Interval>& intervals) {
		VInterval vRet;
		int nSize = intervals.size();
		if (nSize == 0)
		{
			return vRet;
		}

		for (int i = 0; i < nSize; i++)
		{
			if (vRet.empty())
			{
				vRet.push_back(intervals[i]);
			}
			else
			{
				if (vRet.back().end >= intervals[i].start)
				{
					vRet.back().end = max(vRet.back().end, intervals[i].end);
				}
				else
				{
					vRet.push_back(intervals[i]);
				}
			}
		}

		return vRet;
    }
	vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
		VInterval vRet;
		int nSize = intervals.size();
		bool bInserted = false;
		for (int i = 0; i < nSize; i++)
		{
			if (newInterval.start <= intervals[i].start)
			{
				vRet.push_back(newInterval);
				bInserted = true;
			}
			vRet.push_back(intervals[i]);
		}
		if (!bInserted)
		{
			vRet.push_back(newInterval);
		}

		return merge(vRet);
	}
};