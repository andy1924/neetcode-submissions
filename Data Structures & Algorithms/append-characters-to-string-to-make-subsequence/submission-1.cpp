class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0 , j = 0, is_there = 0;

        while(i<t.size() && j < s.size()){
            if(t[i] == s[j]){
                i++;
                is_there++;
            }
            j++;
        }
        return t.size() - is_there;
        
        
    }
};