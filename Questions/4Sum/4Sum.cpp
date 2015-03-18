#include "common.h"

class FourSum {
public:
    vector< vector<int> > fourSum(vector<int> &num, int target) {
		vector<vector<int> > vecQuadruplets;
		if (num.size() < 4) return vecQuadruplets;

		vector<int> quadruplet(4, 0);
		sort(num.begin(), num.end());
		int lastIndex4 = num.size() - 3;
		int lastIndex3 = num.size() - 2;
		for (int i = 0; i < lastIndex4; ++i) {
			quadruplet[0] = num[i];
			if (i > 0 && num[i] == num[i - 1]) continue;
			for (int j = i + 1; j < lastIndex3; ++j) {
				if (j > i + 1 && num[j] == num[j - 1]) continue;
				quadruplet[1] = num[j];
				int p = j + 1, q = num.size() - 1;
				while (p < q) {
					if (p > j + 1 && num[p] == num[p - 1]) {
						++p;
						continue;
					}
					int sumOver = num[i] + num[j] + num[p] + num[q];
					if (sumOver == target) {
						quadruplet[2] = num[p++];
						quadruplet[3] = num[q--];
						vecQuadruplets.push_back(quadruplet);
					}
					else if (sumOver < target) {
						++p;
					}
					else {
						--q;
					}
				}
			}
		}
		return vecQuadruplets;
    }
};