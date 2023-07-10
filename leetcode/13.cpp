class Solution {
public:
    // Sleek way, but needs an unordered map
    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;
        unordered_map<char, int> ump {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for (int i = 0; i < n - 1; i++) {
            ans = ans + (ump[s[i]] < ump[s[i + 1]] ? -ump[s[i]] : ump[s[i]]);
        }

        ans += ump[s[n - 1]];

        return ans;
    }

    // Alternate way, but using a switch + function instead of a map
    int get_val(char x) {
        switch(x) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }

    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans = ans + (get_val(s[i]) < get_val(s[i + 1]) ? -get_val(s[i]) : get_val(s[i]));
        }
        ans += get_val(s[n - 1]);
        return ans;
    }
};
