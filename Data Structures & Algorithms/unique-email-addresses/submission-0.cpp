class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        vector<string> ans;
        string temp;
        int atc = 0, exists = 0;
        int j = 0;

        for (int i = 0; i < emails.size(); i++) {
            temp = "";

            while (j < emails[i].size()) {
                if (atc == 0 && emails[i][j] == '.') {
                    j++;
                    continue;
                }
                else if (atc == 0 && emails[i][j] == '+') {
                    int k = j + 1;
                    while (emails[i][k] != '@') {
                        k++;
                    }
                    j = k;
                    temp += '@';
                    atc = 1;
                }
                else {
                    temp += emails[i][j];
                    if (emails[i][j] == '@')
                        atc = 1;
                    j++;
                }
            }

            for (int l = 0; l < ans.size(); l++) {
                if (ans[l] == temp)
                    exists = 1;
            }

            if (exists != 1)
                ans.push_back(temp);

            j = 0;
            atc = 0;
            exists = 0;
        }

        return ans.size();
    }
};