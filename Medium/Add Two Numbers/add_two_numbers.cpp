using namespace std;

struct ListNode {
     int val; // value of node
     ListNode *next; // ptr to next node

     // constructors
     ListNode() : val(0), next(nullptr) {} 
     ListNode(int x) : val(x), next(nullptr) {} 
     ListNode(int x, ListNode *next) : val(x), next(next) {} 
 };

class Solution {

    int addTwoNumbersRecursiveFunction(int factor, ListNode* currentNode) {

        ListNode *nextNode = currentNode->next; // ptr to next node

        //TODO
        // base case : next node is null (check pointer?)
        if (nextNode == nullptr) { return currentNode->val; }

        return currentNode->val + addTwoNumbersRecursiveFunction((factor*10), nextNode);
    }

    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int x = addTwoNumbersRecursiveFunction(1, l1);
            int y = addTwoNumbersRecursiveFunction(1, l2);

        }
    };