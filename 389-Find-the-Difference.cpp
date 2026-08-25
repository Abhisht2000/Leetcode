class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;

        for (int i = 0; i < t.size(); i++) {
            ans ^= t[i];

            if (i < s.size())
                ans ^= s[i];
        }

        return ans;
    }
};