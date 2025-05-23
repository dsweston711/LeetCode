# Hard - Median of Two Sorted Arrays
---
Runtime of O(log (m+n)). We don't need to make the new merged array - we just need to find the median.

So we can have odd-length medians:

```[1,3], [2]
median is 2
```

even-length medians:

```[1,2], [3,4]
(2+3)/2 = 2.5```

uneven lengths:

```[1,3,5,7], [2,4]
(3+4)/2 = 3.5```

one empty array:
```[], [2,3]
(2+3)/2 = 2.5```

duplicate values:
```[1,1], [1,1]
1```

negative values:
```[-5,3,6], [-2,4,10]
(3+4)/2 = 3.5```

one array fully smaller than the other:
```[1,2,3], [100,101,102]
(3+100)/2 = 51.5```

arrays with different lengths and spacing:
```[1,2,5,8,11], [3,4,6,7]
5```

my instincts are telling me this a binary search on a particular partition. that is:

1. you binary search on the shorter array
2. at each step, you choose a cut point `i` in the shorter array, which implies a cut point `j` in the other array
```i + j = (total length + 1)```
3. then you check if the largest elements on the left of the shorter array and the longer array is <= the smallest on the right in both
4. if not, adjust the binary search: shift left or right depending on the inequality

```text
Partition:
nums1: |----left----| i |----right----|
nums2: |--------left--------| j |--------right--------|

Condition:
    maxLeftX <= minRightY AND maxLeftY <= minRightX
```