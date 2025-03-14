# Medium - Add Two Numbers

- need to multiply each digit by factor of 10 for each linked list part
- could we this do recursively?
- recursively call function
    - base case: next node in list is null
    - return 0?
    - for each call, increase multiplication factor
        - 1, 10, 100, 1000, &c.

After a couple days, perhaps...

ill just traverse the linked lists while the head isnt null and multiply each value by prevplace*10.

then add the numbers.

currently cant think of a better solution, given we dont know the size and rather than reversing the list linked with a stack directly grabbing each value seems less time-consuming. I could be wrong, though.

just checked the desired output... again. ive been approaching this wrong. we directly compare each value since both lists are in reverse and the output will be in reverse, construct the list as we go. this will probably be done recursively.

addendum: after letting it roll around in my head for a while, i decided to use a recursive function. quite happy with this implementation. comments in the code are sufficient i believe.
