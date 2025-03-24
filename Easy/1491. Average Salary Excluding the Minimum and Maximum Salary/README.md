# Easy - 1491. Average Salary Excluding the Minimum and Maximum Salary

This problem is rather straightforward. Given an array of unique salaries, return the average of the array sans the minimum and maximum of the array.

The first thought that came to mind when finding a min/max is using a binary search. I've come to love this algorithm, however it's unnecessary. A single pass with suffice.

The average will be the total sans the min/max divded by `n - 2`. Or:

`(total - min - max) / (n - 2)`

---

# Afterward

After looking at the fastest solution, I see where improvement can be made. Sort the list -> iterate from 1 to size-1 -> perform calculation.
