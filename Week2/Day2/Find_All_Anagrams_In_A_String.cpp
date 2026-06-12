class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = p.size(), m = s.size();

        if (n > m) return ans;

        vector<int> cntP(26, 0);
        vector<int> cntS(26, 0);

        for (char c : p)
            cntP[c - 'a']++;

        for (int i = 0; i < n; i++)
            cntS[s[i] - 'a']++;

        if (cntP == cntS)
            ans.push_back(0);

        for (int i = n; i < m; i++) {
            cntS[s[i] - 'a']++;
            cntS[s[i - n] - 'a']--;

            if (cntP == cntS)
                ans.push_back(i - n + 1);
        }

        return ans;
    }
};
