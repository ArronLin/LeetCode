#pragma once

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* ConstructLinkList(int ary[], int n);