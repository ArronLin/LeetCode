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

int _tmain(int argc, _TCHAR* argv[])
{
	ThreeSumCloset obj;
	int arry[] = {1,1,1,0};
	vector<int> vAry(arry, arry+sizeof(arry)/sizeof(int));
	obj.threeSumClosest(vAry, 100);

	return 0;
}

