# Initial Thoughts
- This can be done in O(n^2) time with two for loops
1. for each element in the array, compare the sum of each element == target

## Implementation - O(n^2)
```pseudocode
for each element in input array
    for each element in input array
        check sum of current element with each element in array
        if sum of current element and element being checked == target
            create a new array
            return array
```
## Initial Thoughts - time better than O(n)?
- utilized an unorderd map to find a complement
- the complement is defined at each step by the current value at index [i] of nums - target
- if the value exists, then return the indices