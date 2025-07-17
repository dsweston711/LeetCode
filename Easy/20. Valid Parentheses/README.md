# Easy - Valid Parentheses

This problem seems self-explanatory. My plan is to make a counter for how many parentheses (not closed-parentheses) there are when iterating through the whole string (so runtime is at worst O(n)), +1 for each ( [ {, -1 for each } ] ). if the count isn't zero by the end, then the function returns false.

but what about `[(])`? is that valid?