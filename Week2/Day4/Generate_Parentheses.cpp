class Solution {
public:
    vector<string> ans;

    bool isValid(string s) {
        int balance = 0;

        for (char c : s) {
            if (c == '(') balance++;
            else balance--;

            if (balance < 0) return false;
        }

        return balance == 0;
    }

    void generate(string s, int n) {
        if (s.size() == 2 * n) {
            if (isValid(s))
                ans.push_back(s);
            return;
        }

        generate(s + "(", n);
        generate(s + ")", n);
    }

    vector<string> generateParenthesis(int n) {
        generate("", n);
        return ans;
    }
};
