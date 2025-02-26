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