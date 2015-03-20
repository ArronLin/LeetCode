#include "common.h"

class ReverseNodesink_Group {
public:
    void reverse(ListNode* pStart, ListNode* pEnd)
    {
        if(!pStart || !pEnd)
            return;
        
        ListNode* pPre = NULL;
        ListNode* pCur = pStart;
        ListNode* pNext = NULL;
        
        while(pPre != pEnd)
        {
            pNext = pCur->next;
            pCur->next = pPre;
            pPre = pCur;
            pCur = pNext;
        }
    }
    ListNode *reverseKGroup(ListNode *head, int k) {
        if(!head || !head->next)
            return head;
        
        ListNode* pHead = head;
        ListNode* pIndex = pHead;
        ListNode* pTail = NULL;
        int nCount = 1;
        
        while(pIndex)
        {
            if(nCount == k)
            {
                ListNode* pNext = pIndex->next;
                reverse(pHead, pIndex);
                if(pTail)
                    pTail->next = pIndex;
                else
                    head = pIndex;
                
                pTail = pHead;
                pHead = pNext;
                pIndex = pNext;
                
                nCount = 1;
            }
            else
            {
				nCount++;
                pIndex = pIndex->next;
            }
        }
        
        if(pTail)
            pTail->next = pHead;
        
        return head;
    }
};