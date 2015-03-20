#include "common.h"

ListNode* ConstructLinkList(int ary[], int n)
{
	ListNode *pHead = NULL;
	ListNode *pPre = NULL;
	for(int i = 0; i < n; ++i)
	{
		ListNode *pNode = new ListNode(ary[i]);
		if(!pPre)
		{
			pHead = pNode;
			pPre = pNode;
		}
		else
		{
			pPre->next = pNode;
			pPre = pNode;
		}
	}

	return pHead;
}