#include <iostream> 
#include <vector> 
#include <list> 


 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0; 
        int diferentialvalue = 0; 
        int v1 = 0,v2 = 0; 
        ListNode* base = new ListNode(0); 
        ListNode* last = base; 

        while (l1 != nullptr || l2 != nullptr || diferentialvalue != 0 ){
            if (l1 == nullptr){
                v1 = 0;
            } else {
                v1 = l1 -> val; 
            }

            if (l2 == nullptr){
                v2 = 0;
            } else {
                v2 = l2 -> val; 
            }

            sum = v1 + v2 + diferentialvalue; 

            if ( sum >= 10){
                int t = sum; 
                diferentialvalue = 1; 
                sum = t - 10; 
            } else if (sum < 10){
                diferentialvalue = 0; 
            }

            last-> next = new ListNode(sum); 
            last = last -> next; 

            if (l1 != nullptr){
                l1 = l1 -> next; 
            }
            if (l2 != nullptr){
                l2 = l2 -> next; 
            }

        }

        return base -> next;

    }
};
