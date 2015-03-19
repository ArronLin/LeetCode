// MyLeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../Questions/TwoSum/TwoSum.cpp"
#include "../Questions/MedianofTwoSortedArrays/MedianofTwoSortedArrays.cpp"
#include "../Questions/LongestSubstring/LongestSubstring.cpp"
#include "../Questions/AddTwoNums/AddTwoNums.cpp"
#include "../Questions/LongestPalindromicSubstring/LongestPalindromicSubstring.cpp"
#include "../Questions/ZigZagConversion/ZigZagConversion.cpp"
#include "../Questions/ReverseInteger/ReverseInteger.cpp"
#include "../Questions/StringtoInteger/StringtoInteger.cpp"
#include "../Questions/PalindromeNumber/PalindromeNumber.cpp"
#include "../Questions/RegularExpressionMatching/RegularExpressionMatching.cpp"
#include "../Questions/ContainerWithMostWater/ContainerWithMostWater.cpp"
#include "../Questions/IntegertoRoman/IntegertoRoman.cpp"
#include "../Questions/RomantoInteger/RomantoInteger.cpp"
#include "../Questions/LongestCommonPrefix/LongestCommonPrefix.cpp"
#include "../Questions/3Sum/3Sum.cpp"
#include "../Questions/3SumClosest/3SumClosest.cpp"
#include "../Questions/LetterCombinationsofaPhoneNumber/LetterCombinationsofaPhoneNumber.cpp"
#include "../Questions/4Sum/4Sum.cpp"
#include "../Questions/RemoveNthNodeFromEndofList/RemoveNthNodeFromEndofList.cpp"
#include "../Questions/ValidParentheses/ValidParentheses.cpp"
#include "../Questions/MergeTwoSortedLists/MergeTwoSortedLists.cpp"
#include "../Questions/GenerateParentheses/GenerateParentheses.cpp"
#include "../Questions/MergekSortedLists/MergekSortedLists.cpp"

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

int _tmain(int argc, _TCHAR* argv[])
{
	MergekSortedLists obj;
	ListNode *p1, *p2, *p3;
	p1 = p2 = p3 = NULL;
	int ary1[] = {-2};
	p2 = ConstructLinkList(ary1, 1);
	int ary2[] = {-3,-2,1};
	p3 = ConstructLinkList(ary2, 3);
	vector<ListNode*> lists;
	lists.push_back(p1);lists.push_back(p2);lists.push_back(p3);

	ListNode *pRet = obj.mergeKLists(lists);
	
	return 0;
}

