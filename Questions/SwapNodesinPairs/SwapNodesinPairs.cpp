#include "common.h"

class SwapNodesinPairs {
public:
    ListNode *swapPairs(ListNode *head) {
        if(!head || !head->next)
            return head;
        
        ListNode** pNextNode = &head;
        while(1)
        {
            ListNode* pNode1 = *pNextNode;
            if(!pNode1)
                return head;
            ListNode* pNode2 = pNode1->next;
            if(!pNode2)
                return head;
            
            *pNextNode = pNode2;
            pNode1->next = pNode2->next;
            pNode2->next = pNode1;
            
            pNextNode = &(pNode1->next);
        }
        
        return head;
    }
};