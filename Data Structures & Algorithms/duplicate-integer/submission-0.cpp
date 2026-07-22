class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> dupnum;
        for(int i = 0; i < nums.size();i++){
            for(int j = 0; j < dupnum.size();j++){
                if(nums[i] == dupnum[j]){
                    return true;
                }
            }
            dupnum.push_back(nums[i]);
        }
        return false;
    }
};