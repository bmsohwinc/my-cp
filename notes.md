## Common findings in the process
1. Should evaluate all **corner cases** effectively.
    - They will hold clue in easy type problems
    - Maybe even in harder problems.
    - **Three number problems**
        - These are very much thought oriented, but very simple
    - XOR type questions
        - seem tricky, but working with test cases, find patterns. **Patterns** give clues.
    - finding range sums
        - It's simply about storing prefix sums, and finally returning diff between sum values. I was thinking of Fenwick/Segment Tree (🤦)
    - check: link1
2. Handling **decimal precisions** with a fraction
    - Sometimes using decimals is hard -- leads to lot of precision errors
    - Instead, use numerator-denominator approach
    - And solve equations accordingly
    - This way, we can solve problems much easily, specially when there are time constraints and Python can't be used
    - Also while calculating **n-roots**, better use a custom **binary search** method, with proper **overflow handling**.
        - Builtin utils might not help
        - To check if overflow would happen, try dividing the INT_MAX by multiplicand, and check if multiplier is greater than the quotient
    - check: link2
3. Sometimes **brute-force** can also work, try it once.
    - There won't be any way of optimizing time
    - Memory optimization could be a possibility
    - They can include simple 2 loops, or sometimes even ONE-PASS with a track of max/min variables
    - check: link3
4. **Two pointer**, **slow pointers** are gems in linked lists and arrays
    - Very easily, with O(1) memory and O(n) time we can solve the questions
    - But needs a bit of thought while fitting in the method
    - Also, check for **calculating length of lists** in one pass and in next pass use it for building logic
    - Sometimes 2 pointers can be reduced to just 1 pointer also
    - reversing linked list in iterative and recursive manners is a classic
    - deleting a node
        - You can have a O(n) solution of swapping values. But, using pointers, this can be **done in O(1)**
    - check: link4
5. Binary tree means, use recursions
    - Preorder, postorder, inorder traversals are to be by-hearted
    - But always know the iterative approach too (recursive ones are trivial sometimes)
        - Used a stack to get the iterative approach
        - Sometimes, stack with a last pointer will be helpful
            - for post order, visit left continuously; Once null, push the node only if right doesn't exist or is already visited
    - Reverse a binary tree
        - recursive is easy
        - iterative is also easy -- just use a queue and swap left-right pointers
    - Finding common ancestors in BST
        - Remember, it is a **BST**
        - Means, simply checking values of root, p, q and navigating down the tree will give the ancestor
    - Finding all paths from root to leaf in tree
    - check: link5
6. Stack and Queue optimizations
    - Making `getMin()` run in O(1) time is a specific question in stacks
    - Maintaining a separate `minEl` and modifying the inserted elements in stack is the trick
        - But I don't like the trick. Seems *good-ish* for system level optimization, but not elegant for business level problems
    - Implementing stack using queues (1 queue, 2 queues, O(n) pop + O(1) push, O(1) pop + O(n) push, etc)
    - Implementing queue using stacks (2 stacks is a must; But O(n) pop can be optimized to **Amortized** O(1))
    - check: link6
7. Array and Search optimizations
    - When array is already sorted, it could be a clue for O(n) solutions
    - We can directly give a O(n logn) solution, but there could be a better one
    - Another here was on searching Majority element. I had a O(n logn) solution, but using [Boyer-Moore voting algo](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_majority_vote_algorithm) it can be done in O(n)
        - But can work only when majority element has count more than `floor(n / 2)`
    - check: link7
8. Math tricks and optimizations
    - Time can be O(n), but even memory can be optimized from O(2) to O(1)
    - Time optimized from O(log n) to O(1) -- these can be very specific, needing lot of math knowledge
    - Finding if a number n is power of b -- a very sleek solution
        - You can have the usual way of O(log_b n) solution of repeated division
        - But there is O(1) way 😜 
            - Get the max number with that power b less than INT_MAX
            - Then check if n divides the max_power. **_BOOM_**
    - check: link8
9. Bit manipulations -- **_closest to superpower. really._**
    - It's weird to understand sometimes
    - They are the subtle tricks that exist in the computation world
    - Found this gem 💎: https://graphics.stanford.edu/~seander/bithacks.html
    - Variations
        - Finding number of set bits
        - Reversing bits
        - Finding if number is power of 2
        - Finding missing number from n distinct numbers in range 0 - n
            - math approach can lead to int overflow. But XORing can avoid it.
    - check: link9 
10. **_VSP_** - Very Specific Problems
    - These are ones which are not general problems. They are specifically made to analyze different approaches, analyze their Time and Space complexities, etc
    - They are:
        - Happy number: Check if a number reduces to `1` by repeated squared-digit summation
        - Summary Ranges: Checking if continuous range of increasing numbers exist in a sorted, unq numbered array
    - check: link10
11. Using hashmap
    - Quite useful for easy-fetch, limited elements type of problems
    - Keeping double hashmaps is also useful
        - **Check for corner cases**
    - Can have alternate solutions, where Time is more, and memory is less
        - Ex, while checking duplicates in an array, there are 2 ways
            a) Sort the array and in single pass detect duplicate -- O(n log n + n) time and O(1) memory
            b) Use hashmap -- O(n) time and O(n) memory
    - Checking if 2 strings are anagrams
        - Sorting is one technique, also using hashmap is another -- trade-offs exist between space and time
        - Related note, there could be follow up on how unicodes could be fit into the anagram checking algo.
            - There is this discussion on leetcode for the same: https://leetcode.com/problems/valid-anagram/discuss/66533/java-solution-hashmap-unicode-follow-up
            - And a unicode related concept on surrogate pairs, graphemes clusters: http://www.unicode.org/reports/tr29/#Grapheme_Cluster_Boundaries
    - check: link11
12. Sliding Window is a good technique at times
    - We can use some hashmap or some thing similar and pop out elements as we proceed thru the array to reach the answer
    - check: link12
13. Binary Search - a higly underrated tool
    - check: link13
14. Nim Games
    - These are mostly DP-ish problems. Sometimes, sheet pattern recognition can save time and memory
    - check: link14
15. Greedy algos
    - Very stealthy. You'll never know you applied greedy until you apply and solve it.
    - In one of the questions, there was nothing to optimize, but had to answer yes/no and a possible path if yes.
    - check: link15
16. 


## Problem links
- link1:
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616a-e-cc.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616b-e-cc.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616c-e-cc-nt.cpp
    - https://codeforces.com/contest/1619/submission/141667573
    - https://codeforces.com/problemset/problem/1622/A
    - https://codeforces.com/contest/1632/submission/144872968
    - https://leetcode.com/submissions/detail/636475866/

- link2:
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616c-e-cc-nt.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1619b-e-bf-bs-of.cpp

- link3:
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/lc-119-e-bf.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/lc-121-e-bf.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1619b-e-bf-bs-of.cpp

- link4:
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/lc-141-e-ll-2p-sf.cpp
    - https://leetcode.com/submissions/detail/620285013/
    - 2 pointers https://leetcode.com/submissions/detail/626819663/ to 1 pointer https://leetcode.com/submissions/detail/626823855/
    - https://leetcode.com/submissions/detail/626886225/
    - delete node: O(n) https://leetcode.com/submissions/detail/630116560/ to O(1) https://leetcode.com/submissions/detail/630118316/
    - swapping vowels: https://leetcode.com/submissions/detail/636482499/

- link5:
    - https://leetcode.com/submissions/detail/613593886/
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/lc-144-e-bt-it.cpp
    - https://leetcode.com/problems/binary-tree-postorder-traversal/
    - reverse binary tree: recusive https://leetcode.com/submissions/detail/627580649/ to iterative https://leetcode.com/submissions/detail/627639158/
    - common ancestor in bst: recursive https://leetcode.com/submissions/detail/629754783/ to iterative https://leetcode.com/submissions/detail/629756038/
    - all paths from root to leaves: recursive https://leetcode.com/submissions/detail/631729864/ to iterative 

- link6:
    - https://leetcode.com/submissions/detail/619495983/
    - stk using 2 qs https://leetcode.com/submissions/detail/627574728/ to stk using 1 q https://leetcode.com/submissions/detail/627567588/
    - que using 2 stks O(n) https://leetcode.com/submissions/detail/629084107/ to O(1) https://leetcode.com/submissions/detail/629707742/

- link7:
    - O(n logn) https://leetcode.com/submissions/detail/620764540/ to O(n) https://leetcode.com/submissions/detail/620774983/
    - O(n logn) https://leetcode.com/submissions/detail/620943053/ to O(n) https://leetcode.com/submissions/detail/622208807/

- link8:
    - o(2) memory https://leetcode.com/submissions/detail/622221066/ to O(1) memory https://leetcode.com/submissions/detail/622253898/
    - O(log n) time https://leetcode.com/submissions/detail/632391482/ to O(1) time https://leetcode.com/submissions/detail/632396138/
    - O(log n) time https://leetcode.com/submissions/detail/635042282/ to O(1) time https://leetcode.com/problems/power-of-three/solution/#fn4

- link9:
    - O(log n) https://leetcode.com/submissions/detail/622688610/ to O(< log n) https://leetcode.com/submissions/detail/622692580/
    - Heavy memory, O(log n) time https://leetcode.com/submissions/detail/622660714/ to O(1) memory and time https://leetcode.com/problems/reverse-bits/discuss/54741/O(1)-bit-operation-C++-solution-(8ms)
    - math approach using sum https://leetcode.com/submissions/detail/633126421/ to XOR approach: https://leetcode.com/submissions/detail/633130518/

- link10:
    - https://leetcode.com/submissions/detail/624036432/
    - https://leetcode.com/submissions/detail/629037957/

- link11:
    - https://leetcode.com/submissions/detail/626834815/
    - https://leetcode.com/submissions/detail/627522289/
    - https://leetcode.com/submissions/detail/627535912/
    - https://leetcode.com/submissions/detail/630980216/
    - https://leetcode.com/submissions/detail/635041562/

- link12:
    - https://leetcode.com/submissions/detail/627535912/

- link13:
    - https://leetcode.com/submissions/detail/598931410/

- link14:
    - https://leetcode.com/submissions/detail/636461246/
- link15:
    - https://codeforces.com/contest/1647/problem/C
