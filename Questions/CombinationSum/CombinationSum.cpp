#include "common.h"

class CombinationSum  {
public:
	void _combinationSum(vector<int> &candidates, int target, int idx, vector<int> &result, vector<vector<int>> &results)
	{
		if (target == 0)
		{
			results.push_back(result);
			return;
		}

		if (idx >= candidates.size() || candidates[idx] > target)
		{
			return;
		}

		for (int i = 0; i <= target/candidates[idx]; i++)
		{
			result.push_back(candidates[idx]);
		}

		for (int i = target/candidates[idx]; i >= 0; i--)
		{
			result.pop_back();
			int next = 1;
			while (idx+next < candidates.size() && candidates[idx] == candidates[idx+next])
			{
				next++;
			}
			_combinationSum(candidates, target-i*candidates[idx], idx+next, result, results);
		}
	}

    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
		vector<vector<int>> results;

		if (candidates.size() == 0)
		{
			return results;
		}

		sort(candidates.begin(), candidates.end());
		vector<int> result;
		_combinationSum(candidates, target, 0, result, results);
    }
};