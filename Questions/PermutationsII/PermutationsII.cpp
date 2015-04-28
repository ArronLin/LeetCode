#include "common.h"

class PermutationsII {
public:
	void _permute(vector<int> &num, int idx, vector<vector<int>> &result)
	{
		if (idx >= num.size())
		{
			result.push_back(num);
			return;
		}

		for (int i = idx; i < num.size(); i++)
		{
			if (i > idx && num[i] == num[idx])
			{
				continue;
			}
			swap(num[i], num[idx]);
			_permute(num, idx+1, result);
			swap(num[i], num[idx]);
		}
	}

	vector<vector<int> > permuteUnique(vector<int> &num) {
		vector<vector<int> > result;
		if (num.size() == 0)
		{
			return result;
		}

		_permute(num, 0, result);
		return result;
	}
};