# Nice binary search problem that I came across
- Date: 2023-02-28 

## Problem
- https://codeforces.com/problemset/problem/371/C

## Explanation
The given data points are:
    - Number of units of a, b, c required to prepare a burger
    - Number of units of a, b, c you currently have
    - Money that you currently have
    - Price per unit of a, b, c in the shop
The objective of the problem:
    - Maximize the number of burgers you can prepare with the above constraints

Now let's understand the approach given in the editorial: https://codeforces.com/blog/entry/9876

The objective is important here. We need to find the number of burgers that can be prepared. So, why not use that itself to begin the solution?\
That is, we can say we'll produce `x` burgers.\
Now for that, we'll find how many units of a, b and c will have to be purchased.\
Once we find the quantity of each of a, b, and c that is to be purchased, we'll calculate the total cost that is to be incurred.\
If we find that this cost is more than the money that we have, then, we'll reduce the number of burgers produced.\
Naturally, the best way to reduce is into half, as that would help us binary search the optimal value.\
If we find the cost of buying the items for this new burger value is less than or equal to the money that we have, we can store this value of burgers, and push the lower limit for burger production.\

This way, we can optimally use Binary Search to estimate the optimal number of burgers to be produced given the requirement, the stock, and cost.




