# Easy - Roman to Integer
## Initial thoughts
- First of all, we need a table of roman numerals for each value
1 I 
2 II
3 III
4 IV
5 V
6 VI
7 VII
8 VIII
9 IX
10 X
40 XL
50 L 
90 XC
100 C
400 CD
500 D
900 CM
1000 M

perhaps we can represent the conversion as a set of binary trees, where we examine each element of the parsed data (assumed to be in an array) and...

                                        I
                                
                                    II

                                III
                            
                            IV
but then that requires we make a tree for every possible starting point...


 too much work. also read the write up again, theres only 6 instances where subtraction is used (assuming valid input).

 parse the string into a vector
 loop through it
 if (any of the 6 statments, checking current letter and current letter + 1)
- perform corresponding subtraction, move onto current letter + 2.

---

returning to this problem after a week or so, i think the biggest issue is parsing the input. at least, i thought it was. but after thinking about it... when does this ever happen: CIV (104) and IV doesn't mean 4? theres no input before V that would make it otherwise or mess things up.

so for every subtraction, just check the previous letter and see if subtraction is in order.

perhaps we can do this recursively? that may complicate things too much. I might just parse the entire input string into a vector and iterate over it, checking cases each time.

just found out about the fact that C++ can directly convert a string into a vector of characters. nice.