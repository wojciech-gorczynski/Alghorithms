
/*
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.


*/

#include <iostream>
#include <algorithm>
#include <vector>
class Solution {
public:
	int missingNumber(std::vector<int>& nums) {
		std::sort(nums.begin(), nums.end());
		if (nums.at(nums.size() - 1) != nums.size())
			return nums.size();
		else if (nums.at(0) != 0)
			return 0;

		for (int i = 1; i<nums.size(); ++i)
		{
			int expected = nums.at(i - 1) + 1;
			if (nums.at(i) != expected)
				return expected;
		}
		return -1;
	}
};