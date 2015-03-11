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

int _tmain(int argc, _TCHAR* argv[])
{
	ContainerWithMostWater obj;
	int aHeight[] = {1, 2, 4, 2, 4, 6,3, 2, 9};
	vector<int> height (aHeight, aHeight + sizeof(aHeight) / sizeof(int) );
	obj.maxArea(height);
	return 0;
}

