# Medium - Longest Common Prefix Length

---

this problem seems very similar to the previous easy problem, so i'll be giving my shot at it. there are a couple new constraints:

given the two integers from `arr1` and `arr2`, the prefix is formed from its leftmost digit.

this doesnt seem to be an issue at first, as for each check from the last prolem we iterate from the beginning.

---

i think this might actually warrant a dp table, wherein

`dp[i][j] = longest common prefix length up to strings i and j`

nevermind, we dont build off of previous calculations lol

---

greedy explodes... so... perhaps a hashtable?
