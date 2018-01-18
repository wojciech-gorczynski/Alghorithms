/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/


#include <iostream>
#include <vector>
class Solution {
public:
	void moveZeroes(std::vector<int>& nums) {
		for (int i = 0; i <= nums.size() - 1; ++i)
		{
			for (int j = 0; j <= nums.size() - 1; ++j)
			{
				if (nums.at(j) == 0)
				{
					nums.erase(nums.begin() + j);
					nums.push_back(0);
				}
			}
		}
	}
};