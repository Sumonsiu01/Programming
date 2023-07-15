
//https://leetcode.com/problems/kth-largest-element-in-an-array/


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int>pq;

        int i;
        for(i = 0;i<k;i++)
            pq.push(-1*nums[i]);

        for(i =k;i<nums.size();i++)
            {
            if(pq.top()*-1<nums[i])
                {
                pq.pop();
                pq.push(-1*nums[i]);
                }

        }
        return pq.top()*-1;

    }
};
