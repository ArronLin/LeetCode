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
#include "../Questions/ReverseNodesink-Group/ReverseNodesink-Group.cpp"
#include "../Questions/RemoveDuplicatesfromSortedArray/RemoveDuplicatesfromSortedArray.cpp"
#include "../Questions/ImplementstrStr()/ImplementstrStr.cpp"
#include "../Questions/DivideTwoIntegers/DivideTwoIntegers.cpp"
#include "../Questions/SubstringwithConcatenationofAllWords/SubstringwithConcatenationofAllWords.cpp"
#include "../Questions/NextPermutation/NextPermutation.cpp"
#include "../Questions/LongestValidParentheses/LongestValidParentheses.cpp"
#include "../Questions/SearchinRotatedSortedArray/SearchinRotatedSortedArray.cpp"
#include "../Questions/SearchforaRange/SearchforaRange.cpp"
#include "../Questions/SearchInsertPosition/SearchInsertPosition.cpp"
#include "../Questions/ValidSudoku/ValidSudoku.cpp"

int _tmain(int argc, _TCHAR* argv[])
{
	ValidSudoku obj;
	char ary1[] = ".........";
	char ary2[] = ".........";
	char ary3[] = ".9......1";
	char ary4[] = "8........";
	char ary5[] = ".99357...";
	char ary6[] = ".......4.";
	char ary7[] = "...8.....";
	char ary8[] = ".1....4.9";
	char ary9[] = "...5.4...";
	vector<char> vec1(ary1, ary1+9);
	vector<char> vec2(ary2, ary2+9);
	vector<char> vec3(ary3, ary3+9);
	vector<char> vec4(ary4, ary4+9);
	vector<char> vec5(ary5, ary5+9);
	vector<char> vec6(ary6, ary6+9);
	vector<char> vec7(ary7, ary7+9);
	vector<char> vec8(ary8, ary8+9);
	vector<char> vec9(ary9, ary9+9);

	vector<vector<char>> vVec;
	vVec.push_back(vec1);
	vVec.push_back(vec2);
	vVec.push_back(vec3);
	vVec.push_back(vec4);
	vVec.push_back(vec5);
	vVec.push_back(vec6);
	vVec.push_back(vec7);
	vVec.push_back(vec8);
	vVec.push_back(vec9);

	obj.isValidSudoku(vVec);

	return 0;
}

