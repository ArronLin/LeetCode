#include "common.h"

class MergeTwoSortedLists {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(!l1 && !l2)
			return NULL;
		if(!l1)
			return l2;
		if(!l2)
			return l1;

		ListNode *pHead = NULL;
		if(l1->val < l2->val)
		{
			pHead = l1;
			pHead->next = mergeTwoLists(l1->next, l2);
		}
		else
		{
			pHead = l2;
			pHead->next = mergeTwoLists(l1, l2->next);
		}

		return pHead;
    }
};