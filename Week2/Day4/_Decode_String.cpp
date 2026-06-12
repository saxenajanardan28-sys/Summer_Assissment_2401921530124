class Solution {
public:
    string decode(string s, int &i) {
        string res = "";
        int num = 0;

        while (i < s.size()) {

            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            else if (s[i] == '[') {
                i++;
                string temp = decode(s, i);

                while (num-- > 0)
                    res += temp;

                num = 0;
            }
            else if (s[i] == ']') {
                return res;
            }
            else {
                res += s[i];
            }

            i++;
        }

        return res;
    }

    string decodeString(string s) {
        int i = 0;
        return decode(s, i);
    }
};
