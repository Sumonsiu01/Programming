//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbm4yS0d5emRGUWJ3eV9Wa2ZGaFJROFpHR0VLQXxBQ3Jtc0ttZlNvclAzU05hWV9pZ0hIT3ZJcHdiSXNzaHRYWUpSYzJPZ0pXR2YyUE5kRS0yd2JFV0pTTXBXZ1BCbEZ5aWhJQi1wUk9pVlFzaHJndGhVWkI2Z0gwZGxUSERGS2NSUVBIcW5fNk1jQmFtR3lFdEYzaw&q=https%3A%2F%2Fleetcode.com%2Fproblems%2Ftwo-sum-ii-input-array-is-sorted%2F
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i = 1;i<numbers.size();i++)
        {
            int d = target   - numbers[i];
        int lo =lower_bound(numbers.begin(),numbers.begin()+i-1,d) - numbers.begin();
            if(lo<numbers.size() && numbers[lo] == d)
            {
                return {lo+1,i+1};
            }
        }
        return{-1,-1};

    }
};
