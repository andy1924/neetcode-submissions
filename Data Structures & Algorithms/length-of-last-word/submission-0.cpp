class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(int(s[i]) == 32){
                for(int j = i; j < s.size(); j++){
                    if(int(s[j])>=65 && int(s[j])<=122) count = 0;
                }
            }
            else count++;
        }
        return count;
    }
};