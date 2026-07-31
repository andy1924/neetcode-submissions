class Solution {
private:
    int top = -1;

public:
    void push(char *arr, char val) {
        arr[++top] = val;
    }

    void pop(char *arr) {
        if (top <= -1)
            return;
        else
            top--;
    }

    bool isValid(string s) {
        char arr[s.size()];

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '[' || s[i] == '(' || s[i] == '{')
                push(arr, s[i]);

            else if (s[i] == ']' || s[i] == ')' || s[i] == '}') {

                if (top == -1)
                    return false;

                if (s[i] == ']' && arr[top] == '[')
                    pop(arr);
                else if (s[i] == ')' && arr[top] == '(')
                    pop(arr);
                else if (s[i] == '}' && arr[top] == '{')
                    pop(arr);
                else
                    return false;
            }
            else
                return false;
        }

        return (top == -1);
    }
};