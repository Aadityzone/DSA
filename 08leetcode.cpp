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
// ques 3
// brute

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int largestArea = 0;
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                int minx = min(height[i], height[j]);
                int area = minx * (j - i);
                if (largestArea < area)
                {
                    largestArea = area;
                }
            }
        }
        return largestArea;
    }
};

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int max = height[0];
        int scmax = 0;
        for (int i = 1; i < height.size(); i++)
        {
            if (height[i] > max)
            {
                scmax = max;
                max = height[i];
            }
            else if (height[i] > scmax && height[i] != max)
            {
                scmax = height[i];
            }
        }
    }
};

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int *ptr1 = &height[0];
        int *ptr2 = &height[n - 1];
        int newarea;
        int area = min(height[ptr1 - &height[0]], height[ptr2 - &height[0]]) * (ptr2 - ptr1);
        for (int i = 1; i < n; i++)
        {
            newarea = min(height[ptr1 - &height[0]], height[ptr2 - i - &height[0]]) * (ptr2 - i - ptr1);
            if ((*ptr2 - *(ptr2 - i)) > i && newarea > area)
            {
                ptr2 -= i;
                area = newarea;
            }
        }
        for (int j = 0; j < (ptr2 - ptr1); j++)
        {
            newarea = min(height[ptr1 + j - &height[0]], height[ptr2 - &height[0]]) * (ptr2 - ptr1 + j);
            if ((*ptr1 - *(ptr1 + j)) > j && newarea > area)
            {
                ptr1 += j;
                area = newarea;
            }
        }
        return area;
    }
};

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        if (strs.size() == 0)
            return "";

        string first = strs[0];

        for (int i = 0; i < first.length(); i++)
        {

            char currentChar = first[i];

            for (int j = 1; j < strs.size(); j++)
            {

                if (i >= strs[j].length() || strs[j][i] != currentChar)
                {
                    return first.substr(0, i);
                }
            }
        }
        return first;
    }
};
