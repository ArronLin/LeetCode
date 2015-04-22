#include "common.h"

class CombinationSumII {
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

		result.push_back(candidates[idx]);
		_combinationSum(candidates, target-candidates[idx], idx+1, result, results);
		result.pop_back();
		int next = 1;
		while (idx+next < candidates.size() && candidates[idx] == candidates[idx+next])
		{
			next++;
		}
		_combinationSum(candidates, target, idx+next, result, results);
	}

	vector<vector<int> > combinationSum2(vector<int> &num, int target) {
		vector<vector<int>> results;

		if (num.size() == 0)
		{
			return results;
		}

		sort(num.begin(), num.end());
		vector<int> result;
		_combinationSum(num, target, 0, result, results);        
	}
};