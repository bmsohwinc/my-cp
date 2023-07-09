class Solution {
public:
    // Convert to string
    bool isPalindrome(int x) {
        if (x > 0 and x % 10 == 0) return false;
        string s = to_string(x);
        string s1 = s;
        reverse(s.begin(), s.end());
        return s1 == s;
    }

    // Reconstruct reverse number
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int pow = 1, n = x, cnt = 0;
        while (n > 0) {
            cnt++;
            if (cnt == 10) {
                break;
            }
            pow *= 10;
            n = n / 10;
        }
        n = x;
        if (cnt < 10) {
            pow /= 10;
        }
        while (n > 0) {
            int u = n / pow;
            int v = n % 10;
            if (u != v) {
                return false;
            }
            n = n % pow;
            n /= 10;
            pow /= 100;
        }
        return true;
    }
};
