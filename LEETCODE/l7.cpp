
//https://leetcode.com/problems/single-number-ii/
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        map<int,int>cnt;
        priority_queue<pair<int,int>>pq;

        for(auto u:nums)
        {
            cnt[u]++;
        }
        for(auto u:cnt)
        {
            pq.push({u.second*-1,u.first});
        }
        return pq.top().second;

      }
};
