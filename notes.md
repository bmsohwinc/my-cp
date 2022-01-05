## Common findings in the process
1. Should evaluate all **corner cases** effectively.
    - They will hold clue in easy type problems
    - Maybe even in harder problems.
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
    - check: link4
5. Binary tree means, use recursions
    - Preorder, postorder, inorder traversals are to be by-hearted
    - But always know the iterative approach too (recursive ones are trivial sometimes)
        - Used a stack to get the iterative approach
    - check: link5

## Problem links
- link1:
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616a-e-cc.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616b-e-cc.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616c-e-cc-nt.cpp
    - https://codeforces.com/contest/1619/submission/141667573

- link2:
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1616c-e-cc-nt.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1619b-e-bf-bs-of.cpp

- link3:
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/lc-119-e-bf.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/lc-121-e-bf.cpp
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/cf-1619b-e-bf-bs-of.cpp

- link4:
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/lc-141-e-ll-2p-sf.cpp

- link5:
    - https://leetcode.com/submissions/detail/613593886/
    - https://github.com/bmsohwinc/my-cp/blob/main/codes/lc-144-e-bt-it.cpp

