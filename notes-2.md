# Notes version 2
Just experimenting different methods to test which helps retain the knowledge of CP the most.
1. Solving questions from https://leetcode.com/problem-list/top-interview-questions/?sorting=W3sic29ydE9yZGVyIjoiREVTQ0VORElORyIsIm9yZGVyQnkiOiJBQ19SQVRFIn1d
2. And participating in contests
3. And upsolving contest problems



# Problems
1. https://leetcode.com/problems/permutations/
    - backtracking
    - involves building all possible array permutations in a recursive manner
    - algo:
```
    generate(input_array, seed_array):
        if input_array is empty():
            result.push(seed_array)
            return
        for every element of input array:
            take_copies();
            seed_array.push(it);
            input_array.remove(it);
            generate(input_array, seed_array);
```
2. https://leetcode.com/problems/subsets/description/
    - backtracking
    - involves building all possible subsets in a recursive manner
    - algo:
```
    generate(curr_array, rem_array):
        res.push_back(curr_array);
        for element in rem_array:
            take_copies();
            curr_array.push(element);
            rem_array.erase(elements before element);
            generate(curr_array, rem_array);
```
3. https://leetcode.com/problems/maximum-depth-of-binary-tree/
    - binary tree
    - max depth of a binary tree
    - algo:
```
    maxDepth(node):
        if node == null:
            return 0
        return 1 + max( maxDepth(node -> left), maxDepth(node -> right) );
```
4. https://leetcode.com/problems/binary-tree-inorder-traversal/
    - binary tree
    - inorder using stacks
    - inorder using hashmaps
    - algo:
```
    inorder(node):
        stk.push(node)
        curr = node;
        while (curr != NULL or !stk.empty()):
            while curr != NULL:
                stk.push(curr -> left);
                curr = curr -> left;
            curr = stk.top()
            res.push(curr)
            curr = curr -> right
```
5. https://leetcode.com/problems/reverse-linked-list/
    - linked list
    - reverse linked list in O(N) time and in O(1) space
    - algo:
```
    reverseLL(node):
        prev = NULL
        curr = node
        while curr != NULL:
            nxt = curr -> next
            curr -> next = prev
            prev = curr
            curr = nxt
```
6. https://leetcode.com/problems/generate-parentheses/
    - backtrack
    - generate all possible valid `n` pair paranthesis combinations
    - algo:
```
    generate(n):
        seed = ["()"]
        for tgt = 2 to n:
            new_list = []
            for s in seed:
                s1 = "()" + s
                new_list.push(move_char_and_generate_uniq_strings(s1, ')'))
                new_list.push(move_char_and_generate_uniq_strings(s1, '('))
                seed = new_list
        return seed
```
7. https://leetcode.com/problems/rotate-image/description/
    - matrix
    - rotating an image clockwise
    - can use simple rotation, or use transpose + reversion
    - algo:
```
    rotate(matrix):
        transpose(matrix)
        reverse(matrix)
```
8. https://leetcode.com/problems/pascals-triangle/description/
    - implementation
    - building pascal's triangle
    - algo:
```
    pascals(n):
        res.push({1})
        for i b/w 2 to n:
            get_last_row(res)
            new_row = sum_of_adj_elements(last_row)
            new_row.pad(1)
            res.push(new_row)
```
9. https://leetcode.com/problems/single-number/
    - xor
    - finding the element that's not present twice in the array
10. https://leetcode.com/problems/kth-smallest-element-in-a-bst/
    - binary search tree
    - inorder
    - find the Kth smallest element in a BST
    - algo:
```
    find_kth(node, k):
        ans = inorder(node, k)
        return ans;
```
11. https://leetcode.com/problems/fizz-buzz/
    - basic
    - can use `%`
    - can use `mem writes`
12. https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
    - binary search tree
    - use binary search to convert sorted array to bst
    - algo:
```
    build(l, h):
        m = l + h / 2
        x = new Node(m)
        x -> left = build(l, m - 1)
        x -> right = build(m + 1, h)
        return x
```
13. https://leetcode.com/problems/group-anagrams/
    - hashmap
    - group the anagrams, using hashmap
14. https://leetcode.com/problems/house-robber/description/
    - dynamic programming
    - similar to fibonacci procedure
    - algo
```
    solve(nums):
        prev = nums[0]
        for i in nums:
            ans = max(nums[i] + pprev, prev)
            pprev = prev
            prev = ans
        return prev
```
15. https://codeforces.com/contest/1797/problem/B
    - basic math
    - read the question twice, workout the test cases twice, think of corner test cases
        - N being odd or even
        - N being 1 or 0
        - N having a low limit (< 10^3)
16. https://leetcode.com/problems/first-unique-character-in-a-string/
    - string search
    - get the first character that is not repeating in the string
    - methods:
        - Method 1: Do 1 pass and store counts. Do 1 more pass and check counts of each char
        - Method 2: Do 1 pass and store char <> list of idx in a map. Out of keys with 1 idx, pick the least idx
17. https://leetcode.com/problems/game-of-life/description/
    - conway's game of life
    - board matrix updates
    - methods:
        - Method 1: Create copy of board and update
        - Method 2: Do inplace update
18. https://leetcode.com/problems/kth-largest-element-in-an-array/
    - find kth largest element in array in `O(N)`
    - Methods:
        - Sort + fetch -- O(N logN)
        - Use Max heap with K size -- O(N logK)
        - Use Quick Select -- O(N) avg. case. O(N^2) worst case
        - Shuffle + Quick Select -- O(N) most cases
    - algo
```
    find(arr, k):
        l = 0
        h = n
        while l <= h:
            idx = partition(arr, l, h)
            if idx == k:
                return arr[k]
            if idx < k:
                l = idx + 1
            if idx > k:
                h = idx - 1
       return arr[k]
```
19. https://leetcode.com/problems/product-of-array-except-self/
    - get product of all elements except curr element
    - Methods:
        - 1: Find array product and divide by current element
        - 2: Find Prefix products, and then find Suffix products
    - algo:
```
    multiply(arr, n):
        pref[0] = 1
        for i = 1 to n
            pref[i] = pref[i - 1] * arr[i - 1]
        suf = 1
        for i = n - 1 to 0:
            pref[i] *= suf
            suf *= arr[i]
        return pref
```
20. https://leetcode.com/problems/palindrome-partitioning/
    - backtracking
    - methods:
        - build all substrs and then check if each list has palindromes
        - build substrs and check if palindrome at the same time
    - algo:
```
    build(s, temp):
        if s is empty()
            res.push(temp)
            return
            
        for i in s:
            s1 = s.substr(0, i)
            if not is_palindrome(s1): continue
            
            temp.push(s1)  // choose
            build(s.substr(i, n), temp)  // explore
            temp.pop(s1)  // unchoose
```
21. https://leetcode.com/problems/binary-tree-level-order-traversal/
    - binary tree, bfs
    - you can reuse existing queue by storing the queue size while popping
22.  https://leetcode.com/problems/top-k-frequent-elements
    - priority queue, max heap, hash map
    - methods:
        - using priority queue and frequency map
        - using frequency bucket list and frequency map
    - algo:
```
    find_k_frequentists(arr):
        freq_map = get_freq_map(arr)
        bkt_list = list(list(n))
        for kv in freq_map:
            bkt_list[v].push(k)
        for rev_itr in bkt_list:
            res.push(rev_itr.elements)
        return res
```
23. https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
    - greedy
    - the delta is all you need to compute profit. It could be adjacent, or some far off value. It's the same.
    - algo:
```
    find_max_profit(arr):
        for i in arr.size():
            ans += max(0, arr[i + 1] - arr[i])
        return ans
```
24. https://leetcode.com/problems/majority-element/
    - Boyre Moore Voting algorithm
    - Hashmap, quick select, divide and conquer
    - algo:
```
    find_majority(nums):
        for e in nums:
            if cnt == 0:
                ans = e
                cnt++
            else:
                if e == ans:
                    cnt++
                else:
                    cnt--
        return ans 
```
25. https://leetcode.com/problems/valid-anagram
    - string match
    - hash map
    - matching anagrams
26. https://leetcode.com/problems/implement-trie-prefix-tree/
    - implement trie
    - using Java
    - functions include insert, search and startsWith
27. https://leetcode.com/problems/missing-number
    - xors, sums
    - O-1 space and O-n time
28. https://leetcode.com/problems/unique-paths
    - dynamic programming
    - Also combinatorics, but that would blow up the memory
    - algo
```
    num_ways(n, m):
        for i in 1 to n:
            for j in 1 to m:
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1]
```
29. https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1
    - dijkstra algorithm
    - shortest path (+ distance) from 1 node to all nodes
    - space complexity - O(N)
    - time complexity - O(N^2)
    - algo:
```
    dijkstra(src):
        visi[n] = {0}
        dist[n] = {INF}
        dist[src] = 0
        while 1:
            get v that has visi[v] = 0 and dist[i] is minimum
            if no such v, break
            
            visi[v] = 1
            for u in adj[v]:
                dist[u] = min(dist[u], edge_wt[u, v] + dist[u])
        return dist
        // Path can be obtained by setting the value of the parent node while updating dist
```
30. https://codeforces.com/contest/1829/submission/206823007
    - DFS to find connected nodes
    - backtracking
    - Use global variables in function calls instead of passing 2D matrix vars
        - Can be graph size, graph structure, graph vector, etc.
    - Use DFS for each cell and maintain a visited array to save DFS backtracking effort
31. https://codeforces.com/contest/1829/submission/206831340
    - BFS
    - implementation


















