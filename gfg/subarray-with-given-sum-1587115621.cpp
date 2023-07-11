public:
    // Time: O(N)
    // Though this is the optimal one, there is a more elegant solution wrt code quality
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int l = 0, r = 0;
        long long csum = arr[0];
        if (s > 0) {
            while (1) {
                if (csum == s) {
                    break;
                }
                
                if (csum < s) {
                    if (r == n -1) {
                        break;
                    }
                    
                    if (r < n - 1) {
                        r++;
                        csum += arr[r];
                    }
                }
                else {
                    csum -= arr[l];
                    l++;
                }
            }
        }
        vector<int> ans;
        if (csum == s) {
            ans.push_back(l + 1);
            ans.push_back(r + 1);
        } else {
            ans.push_back(-1);
        }
        return ans;
    }
