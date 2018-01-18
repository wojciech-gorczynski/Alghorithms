/*
Given two strings s and t, write a function to determine if t is an anagram of s.

For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets.

Follow up:
What if the inputs contain unicode characters? How would you adapt your solution to such case?

*/

#include <iostream>
#include <string>
#include <algorithm>
class Solution {
public:
	bool isAnagram(std::string s, std::string t) {
		if (s.size() != t.size())
			return false;
		std::sort(s.begin(), s.end());
		std::sort(t.begin(), t.end());
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] != t[i])
				return false;
		}
		return true;
	}
};