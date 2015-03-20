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
#include "../Questions/SwapNodesinPairs/SwapNodesinPairs.cpp"

int _tmain(int argc, _TCHAR* argv[])
{
	SwapNodesinPairs obj;
	int ary[] = {1,2,3,4,5,6};
	ListNode *pHead = ConstructLinkList(ary, 6);
	pHead = obj.swapPairs(pHead);

	return 0;
}

