## Common findings in the process
1. Should evaluate all **corner cases** effectively.
    - They will hold clue in easy type problems
    - Maybe even in harder problems.
    - **Three number problems**
        - These are very much thought oriented, but very simple
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
    - check: link4
5. Binary tree means, use recursions
    - Preorder, postorder, inorder traversals are to be by-hearted
    - But always know the iterative approach too (recursive ones are trivial sometimes)
        - Used a stack to get the iterative approach
        - Sometimes, stack with a last pointer will be helpful
            - for post order, visit left continuously; Once null, push the node only if right doesn't exist or is already visited
    - check: link5
6. Stack optimizations
    - Making `getMin()` run in O(1) time is a specific question in stacks
    - Maintaining a separate `minEl` and modifying the inserted elements in stack is the trick
        - But I don't like the trick. Seems *good-ish* for system level optimization, but not elegant for business level problems
    - check: link6
7. Array and Search optimizations
    - When array is already sorted, it could be a clue for O(n) solutions
    - We can directly give a O(n logn) solution, but there could be a better one
    - Another here was on searching Majority element. I had a O(n logn) solution, but using [Boyer-Moore voting algo](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_majority_vote_algorithm) it can be done in O(n)
        - But can work only when majority element has count more than `floor(n / 2)`
    - check: link7
8. Math tricks and optimizations
    - Time can be O(n), but even memory can be optimized from O(2) to O(1)
    - check: link8
9. Bit manipulations -- **_closest to superpower. really._**
    - It's weird to understand sometimes
    - They are the subtle tricks that exist in the computation world
    - Found this gem 💎: https://graphics.stanford.edu/~seander/bithacks.html
    - Variations
        - Finding number of set bits
        - Reversing bits
    - check: link9 

## Problem links
- link1:
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616a-e-cc.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616b-e-cc.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616c-e-cc-nt.cpp
    - https://codeforces.com/contest/1619/submission/141667573
    - https://codeforces.com/problemset/problem/1622/A

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

- link5:
    - https://leetcode.com/submissions/detail/613593886/
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/lc-144-e-bt-it.cpp
    - https://leetcode.com/problems/binary-tree-postorder-traversal/

- link6:
    - https://leetcode.com/submissions/detail/619495983/

- link7:
    - O(n logn) https://leetcode.com/submissions/detail/620764540/ to O(n) https://leetcode.com/submissions/detail/620774983/
    - O(n logn) https://leetcode.com/submissions/detail/620943053/ to O(n) https://leetcode.com/submissions/detail/622208807/

- link8:
    - o(2) memory https://leetcode.com/submissions/detail/622221066/ to O(1) memory https://leetcode.com/submissions/detail/622253898/
- link9:
    - O(log n) https://leetcode.com/submissions/detail/622688610/ to O(< log n) https://leetcode.com/submissions/detail/622692580/
    - Heavy memory, O(log n) time https://leetcode.com/submissions/detail/622660714/ to O(1) memory and time https://leetcode.com/problems/reverse-bits/discuss/54741/O(1)-bit-operation-C++-solution-(8ms)




