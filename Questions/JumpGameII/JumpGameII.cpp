#include "common.h"

class JumpGameII {
public:
    int jump(vector<int>& nums) {
		// Greedy version 2:
		// 
		int n = nums.size();
        int currentCover=0,lastCover=0,num=0;
        for(int i=0;i<n;i++)
        {
            if(lastCover>=n-1)break;
            if(i > lastCover)
            {
               num++;
               lastCover=currentCover;                
            }
            currentCover=max(currentCover,i+nums[i]);
        }
        return num;       
    }
};