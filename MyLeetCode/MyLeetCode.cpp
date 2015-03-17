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

int _tmain(int argc, _TCHAR* argv[])
{
	ThreeSum obj;
	int arry[] = {-4,-2,1,-5,-4,-4,4,-2,0,4,0,-2,3,1,-5,0};
	vector<int> vAry(arry, arry+sizeof(arry)/sizeof(int));
	obj.threeSum(vAry);

	return 0;
}

