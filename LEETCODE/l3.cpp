//https://leetcode.com/problems/non-overlapping-intervals/description/


#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   static bool cmp(vector <int>& a, vector <int>& b){
      return a[1] < b[1];
   }
   int eraseOverlapIntervals(vector<vector<int>>& arr) {
      int n = arr.size();
      if(!n)return 0;
      int cnt = 1;
      sort(arr.begin(), arr.end(), cmp);
      int end = arr[0][1];
      for(int i = 1; i < n; i++){
         if(arr[i][0] >= end){
            end = arr[i][1];
            cnt++;
         }
      }
      return n - cnt;
   }
};
main(){
   vector<vector<int>> v = {{1,2},{1,2},{1,2}};
   Solution ob;
   cout << (ob.eraseOverlapIntervals(v));
}

/*
4
1 2
2 3
3 4
1 3

if(v[i].first<v[i-1].second)
        c++;
*/

