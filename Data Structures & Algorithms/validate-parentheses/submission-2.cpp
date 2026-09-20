class Solution {
public:
    bool isValid(string s) {
        stack<char> char_stack;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                char_stack.push(c);
            }
            else {
                if (char_stack.empty()) {
                    return false;
                }

                if ((c == ')' && char_stack.top() == '(') ||
                    (c == '}' && char_stack.top() == '{') ||
                    (c == ']' && char_stack.top() == '[')) {
                    char_stack.pop();
                }
                else {
                    return false;
                }
            }
        }

        return char_stack.empty();
    }
};