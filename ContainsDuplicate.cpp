/*
Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.


*/

#include <iostream>
#include <vector>
#include <algorithm>
class Solution {
public:
	bool containsDuplicate(std::vector<int>& nums) {

		std::sort(nums.begin(), nums.end());
		if (nums.size() == 0 || nums.size() == 1)
			return false;
		else if (nums.size() == 2)
		{
			if (nums.at(0) == nums.at(1))
				return true;
			else
				return false;
		}
		for (int i = 1; i < (nums.size() - 1); ++i)
		{
			if (i == 1)
			{
				if (nums.at(i - 1) == nums.at(i))
					return true;
			}
			else if (nums.at(i) == nums.at(i - 1) || nums.at(i) == nums.at(i + 1))
				return true;

			else if (i == nums.size() - 2)
			{
				++i;
				if (nums.at(i) == nums.at(i - 1))
					return true;
			}
		}
		return false;
	}
};