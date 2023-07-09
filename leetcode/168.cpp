class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";
        int n = columnNumber;
        while (n > 0) {
            n--; // Because, in Excel column header, 0 is missing.
            int rem = n % 26; // Similar to what we do during decimal to binary
            n /= 26; // Similar to what we do during decimal to binary
            s += ('A' + rem);
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
