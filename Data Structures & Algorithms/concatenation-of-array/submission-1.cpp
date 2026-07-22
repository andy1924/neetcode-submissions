class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> ans = nums;
        ans.reserve(nums.size()*2);
        for(int num: nums){
            ans.push_back(num);
        }
        return ans;
    }
};