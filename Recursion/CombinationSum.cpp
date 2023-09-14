
//https://leetcode.com/problems/combination-sum/description/
class Solution {

  public:
  void print(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds)
  {
    if(ind == arr.size())
    {
      if(target == 0)
      {
        ans.push_back(ds);
      }
      return;
    }
    if(arr[i]<=target)
    {
      ds.push_back(arr[i]);
      print(index,target -arr[index],arr,ans,ds);
      ds.pop_back();
    }
   print(ind+1,target,arr,ans,ds);
  }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

      vector<vector<int>>ans;
      vector<int>v;
      print(0,target,candidates,ans,ds);
      return ans;
    }
        

};