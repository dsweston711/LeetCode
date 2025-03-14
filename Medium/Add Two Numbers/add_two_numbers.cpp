#include <vector>
#include <iostream>
using namespace std;

struct ListNode
{
    int val;        // value of node
    ListNode *next; // ptr to next node

    // constructors
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{

    // recursive function to add two numbers represented by linked lists
    ListNode *addTwoNumbersModified(ListNode *headOne, ListNode *headTwo, int carry)
    {
        // base case: If both lists are empty and no carry, return nullptr
        if (!headOne && !headTwo && carry == 0)
        {
            return nullptr;
        }

        // get values or use 0 if node is null
        int valOne = (headOne) ? headOne->val : 0;
        int valTwo = (headTwo) ? headTwo->val : 0;

        // compute sum and carry
        int sum = valOne + valTwo + carry;
        int newCarry = sum / 10; // carry for next recursion
        int digit = sum % 10;    // single digit for this node

        // create new node for the result
        ListNode *resultNode = new ListNode(digit);

        // recursive call to get the next node
        resultNode->next = addTwoNumbersModified(
            (headOne) ? headOne->next : nullptr,
            (headTwo) ? headTwo->next : nullptr,
            newCarry);

        return resultNode;
    }

public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        return addTwoNumbersModified(l1, l2, 0); // start recursion with carry = 0
    }
};