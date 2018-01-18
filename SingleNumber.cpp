
/*
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/


#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
	int singleNumber(std::vector<int>& nums) {
		std::sort(nums.begin(), nums.end());
		if (nums.size() == 1)
			return nums.at(nums.size() - 1);
		for (int i = 1; i < (nums.size() - 1); ++i)
		{
			if (i == 1)
			{
				if (nums.at(i - 1) != nums.at(i))
					return nums.at(i - 1);
			}
			else if (nums.at(i) != nums.at(i - 1) && nums.at(i) != nums.at(i + 1))
				return nums.at(i);

			else if (i == nums.size() - 2)
			{
				++i;
				if (nums.at(i) != nums.at(i - 1))
					return nums.at(i);
			}
		}
		return -1;

	}
};