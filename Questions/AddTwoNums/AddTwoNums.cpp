#include "common.h"

/*
 * Definition for singly-linked list.*/
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
 
class AddTowNums {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        if(!l1 && !l2)
			return NULL;
		if(!l1)
			return l2;
		if(!l2)
			return l1;

		ListNode *pIndex1, *pIndex2;
		pIndex1 = l1; pIndex2 = l2;
		ListNode *pPre = NULL;
		ListNode *pHead = NULL;
		unsigned int nCarry = 0;
		while(pIndex1 || pIndex2 || nCarry)
		{
			ListNode *pNewNode = new ListNode(0);
			int nVal = 0;
			if(pIndex1 && pIndex2)
			{
				nVal = pIndex1->val + pIndex2->val + nCarry;
				pIndex1 = pIndex1->next;
				pIndex2 = pIndex2->next;
			}
			else if(pIndex1)
			{
				nVal = pIndex1->val + nCarry;
				pIndex1 = pIndex1->next;
			}
			else if(pIndex2)
			{
				nVal = pIndex2->val + nCarry;
				pIndex2 = pIndex2->next;
			}
			else if(nCarry == 1)
			{
				nVal = 1;
			}

			if(nVal >= 10)
			{
				nCarry = 1;
				nVal -= 10;
			}
			else
			{
				nCarry = 0;
			}
			pNewNode->val = nVal;
			if(pPre)
			{
				pPre->next = pNewNode;
			}
			else
			{
				pHead = pNewNode;
			}
			pPre = pNewNode;
		}

		return pHead;
    }
};