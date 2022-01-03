/*
Problem: https://leetcode.com/problems/pascals-triangle-ii/
Time: 10
Idea: {
    This was a quite brute-forcy question.
    I was thinking we need to optimize the double-loop somehow.
    But it was just the same O(n2) solution.
    
    But I used O(2n) memory. I saw few discussions where they used a O(n) memory.
    Brilliant idea - we can just loop from the end towards start and do a running sum.
    https://leetcode.com/problems/pascals-triangle-ii/discuss/38420/Here-is-my-brief-O(k)-solution
}
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
        if (rowIndex == 0) return ans;
        
        while(rowIndex--) {
            vector<int> l1 = {1};
            for (int j = 0; j < ans.size() - 1; j++) {
                l1.push_back(ans[j] + ans[j + 1]);
            }
            l1.push_back(1);
            // ans = l1;
            ans.clear();
            ans.assign(l1.begin(), l1.end());
        }
        
        return ans;
    }
};

/*

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1

l = [1]

while (rowindex--) {
    l1 = [1]
    for j in 0 to l.length - 2:
        l1.pb(l[j] + l[j + 1])
    l1.pb(1)
    l = l1
}

*/
