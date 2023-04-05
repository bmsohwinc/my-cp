# Notes version 2
Just experimenting different methods to test which helps retain the knowledge of CP the most.

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
2. 



