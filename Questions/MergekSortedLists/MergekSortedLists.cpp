#include "common.h"

class MergekSortedLists {
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

    ListNode *mergeKLists(vector<ListNode *> &lists) {
		int nSize = lists.size();
		if(nSize == 0)
			return NULL;

		int nCurSize = nSize;
		ListNode *pRet = NULL;
		while(nCurSize > 1)
		{
			int nHalfSize = (nCurSize+1)/2;
			for(int i = 0; i < nHalfSize && i+nHalfSize < nCurSize; ++i)
			{
				ListNode *l1 = lists[i];
				ListNode *l2 = lists[i+nHalfSize];
				pRet = mergeTwoLists(l1, l2);
				lists[i] = pRet;
			}

			nCurSize = nHalfSize;
		}

		return pRet;
    }
};