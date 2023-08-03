
//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0,r = 0,n = s.length();

        map<int,int>cnt;
        int ans = 0;
        for(;r<n;r++)
        {
            cnt[s[r]]++;
            for(;cnt[s[r]]>1;l++)
            {
                cnt[s[l]]-- ;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};
