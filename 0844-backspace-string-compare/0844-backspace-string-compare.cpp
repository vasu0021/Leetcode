class Solution {
public:
    bool backspaceCompare(string s, string T) {
        stack<char> s1, s2;
        string str1, str2;

        // Process first string
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#' && !s1.empty())
                s1.pop();
            else if (s[i] != '#')
                s1.push(s[i]);
        }

        // Process second string
        for (int i = 0; i < T.size(); i++) {
            if (T[i] == '#' && !s2.empty())
                s2.pop();
            else if (T[i] != '#')
                s2.push(T[i]);
        }

        // Build final processed strings
        while (!s1.empty()) {
            str1.push_back(s1.top());
            s1.pop();
        }
        while (!s2.empty()) {
            str2.push_back(s2.top());
            s2.pop();
        }

        // Compare results
        return str1 == str2;
    }
};
