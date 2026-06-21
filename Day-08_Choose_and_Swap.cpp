// Problem: Choose and Swap
// Platform: GeeksforGeeks
// Link:https://www.geeksforgeeks.org/problems/choose-and-swap0531/1

class Solution {
public:
    string chooseSwap(string s) {
        vector<int> present(26, 0);

        for (char ch : s)
            present[ch - 'a'] = 1;

        for (int i = 0; i < s.length(); i++) {
            present[s[i] - 'a'] = 0;

            for (int j = 0; j < s[i] - 'a'; j++) {
                if (present[j]) {
                    char ch1 = s[i];
                    char ch2 = 'a' + j;

                    for (int k = 0; k < s.length(); k++) {
                        if (s[k] == ch1)
                            s[k] = ch2;
                        else if (s[k] == ch2)
                            s[k] = ch1;
                    }

                    return s;
                }
            }
        }

        return s;
    }
};
