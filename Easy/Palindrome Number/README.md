# Easy - Palindrome Number
Given an integer x, return true if x is apaindrome, and false otherwise

example:
input: x = 121
output: true

input: x = -121
output: false

input: x = 10
output: false

## initial thoughts
I saw that the follow up asks if we could do it without converting the input integer to a string... you would do that? I was thinking taking the input string and putting it into an array.

so we take input and place it into an array (more specifically a vector because we want it dynamic). say for intput x = 121. perhaps we parse the integer by each digit?

realized i possibly dont need to use two different functions for even and odd integers.