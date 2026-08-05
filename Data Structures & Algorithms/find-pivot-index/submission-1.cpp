class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum_left = 0;
        for(int i = 0; i < nums.size(); i++){
            int sum_right = 0;
            for(int j = i+1 ; j < nums.size(); j++){
                sum_right += nums[j]; 
            }
            if(sum_right == sum_left) return i;
            sum_left += nums[i];
        }
        return -1;
    }
};