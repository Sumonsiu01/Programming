//https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int l = 0,r = 0;
        int c = 0;
        int ans = 0;
        int n = nums.size();
        for(;r<n;r++)
        {
            if(nums[r] == 0)
            {
                c++;
            }
            for(;c>1;l++)
            {
                if(nums[l] == 0)
                c--;
            }
            ans = max(ans,r - l+1);
        }
        return ans - 1;
    }
};