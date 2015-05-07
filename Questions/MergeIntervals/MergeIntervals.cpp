#include "common.h"

class MergeIntervals {
public:
	typedef vector<Interval> VInterval;

	static bool cmp(const Interval &a, const Interval &b)
	{
		return a.start < b.start;
	}

    vector<Interval> merge(vector<Interval>& intervals) {
		VInterval vRet;
		int nSize = intervals.size();
		if (nSize == 0)
		{
			return vRet;
		}

		sort(intervals.begin(), intervals.end(), cmp);

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
};