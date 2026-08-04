class Solution {
public:
    int maxDifference(string s) {
        unordered_map <char , int> freq;
        for(char ch : s){
            freq[ch]++;
        }
        int maxOdd = 0;
        int minEven = INT_MAX;
        for(auto it: freq){
            if(it.second % 2 == 0) minEven = min(minEven, it.second);
            else maxOdd = max(maxOdd, it.second);
        }
        return maxOdd - minEven;
    }
};