# Notes version 2
Just experimenting different methods to test which helps retain the knowledge of CP the most.
1. Solving questions from https://leetcode.com/problem-list/top-interview-questions/?sorting=W3sic29ydE9yZGVyIjoiREVTQ0VORElORyIsIm9yZGVyQnkiOiJBQ19SQVRFIn1d



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








