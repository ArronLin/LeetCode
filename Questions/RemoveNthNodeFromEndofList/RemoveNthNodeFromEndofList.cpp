#include "common.h"

class RemoveNthNodeFromEndofList {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if(!head)
			return NULL;

		ListNode *pSlow, *pQuick, *pPre;
		pPre = NULL;
		pSlow = pQuick = head;
		int nCount = n;
		while(nCount && pQuick)
		{
			pQuick = pQuick->next;
			nCount--;
		}

		while(pQuick)
		{
			pPre = pSlow;
			pSlow = pSlow->next;
			pQuick = pQuick->next;
		}

		if(!pPre)
		{
			head = pSlow->next;
		}
		else
		{
			pPre->next = pSlow->next;
		}

		return head;
    }
};