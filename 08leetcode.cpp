/**
 * Definition for singly-linked list.
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    struct ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        ListNode *Head = new ListNode(0);
        ListNode *p = l1, *q = l2, *curr = Head;
        int carry = 0;
        while (p != nullptr || q != nullptr)
        {
            int x = (p != nullptr) ? p->val : 0;
            int y = (q != nullptr) ? q->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            if (p != nullptr)
                p = p->next;
            if (q != nullptr)
                q = q->next;
        }
        if (carry > 0)
        {
            curr->next = new ListNode(carry);
        }
        return Head->next;
    }
};

// Ques1

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        for (int i = 0; i < k; i++)
        {
        }
    }
};

// ques2
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        int maxLength = 0;
        unordered_map<char, int> charIndexMap;
        int i = 0;
        for (int j = 0; j < n; j++)
        {
            if (charIndexMap.find(s[j]) != charIndexMap.end())
            {
                i = max(charIndexMap[s[j]] + 1, i);
            }
            charIndexMap[s[j]] = j;
            maxLength = max(maxLength, j - i + 1);
        }

        return maxLength;
    }
};

// Container With Most Water

class Sol
{
public:
    int maxArea(vector<int> &height)
    {
        for(int i=0;i<0;i++){
            
        }
    }
};