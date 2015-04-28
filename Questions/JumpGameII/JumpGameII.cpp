#include "common.h"

class JumpGameII {
public:
    int jump(vector<int>& nums) {
		// Greedy version
		// For each round, try to find the furthest location could jump
		// Once it could reach the end of the range, it is the result.
		int n = nums.size();
        int maxx=0,temp=0,num=0;
        for(int i=0;i<n;)
        {
            if(temp>=n-1)break;
            while(i<=temp)
            {
                maxx=max(maxx,i+nums[i]);
                ++i;
            }
            num++;
            temp=maxx;            
        }
        return num;       
    }
};