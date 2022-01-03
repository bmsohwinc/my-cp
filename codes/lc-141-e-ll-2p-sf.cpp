/*
Problem: https://leetcode.com/problems/linked-list-cycle/
Time: 10
Idea: {
    I was knowing the slow-fast pointer approach, so was able to solve with O(n) time and O(1) memory.
    Else, I would have tried to keep some kind of map and failed to get the working solution.
    So, keeping a slow-fast pointer, 2-pointer is a real deal maker.
}
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow, *fast;
        slow = fast = head;
        
        while(true) {
            if (slow == nullptr or fast == nullptr or fast -> next == nullptr) {
                return false;
            }
            
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};
