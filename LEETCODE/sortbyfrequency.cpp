//https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    string frequencySort(string s) {

        int  n = s.length();
        map<char,int>cnt;
        for(int i = 0;i<n;i++)cnt[s[i]]++;

        priority_queue<pair<int,int>>pq;
        for(auto u:cnt)
        {
            pq.push({u.second,u.first});
        }
        string ans = "";
        while(!pq.empty())
        {
            ans.append(pq.top().first,pq.top().second);
            pq.pop();
            
        }
        return ans;
        

    }
};