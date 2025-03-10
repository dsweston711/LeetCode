using namespace std;

struct ListNode {
     int val;
     ListNode *next; // ptr to next node

     // constructors
     ListNode() : val(0), next(nullptr) {} 
     ListNode(int x) : val(x), next(nullptr) {} 
     ListNode(int x, ListNode *next) : val(x), next(next) {} 
 };

class Solution {

    int addTwoNumbersRecursiveFunction(int factor, ListNode* currentNode) {

        ListNode *nextNode = currentNode->next;

        //TODO
        // base case : next node is null (check pointer?)

        return currentNode->val + addTwoNumbersRecursiveFunction((factor*10), nextNode);
    }

    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int x = addTwoNumbersRecursiveFunction(1, l1);
            int y = addTwoNumbersRecursiveFunction(1, l2);

        }
    };