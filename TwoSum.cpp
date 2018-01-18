/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/


#include <iostream>
#include <vector>

class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		std::vector<int>temp;
		bool check = false;
		for (int i = 0; i < nums.size(); ++i)
		{
			if (check)break;
			for (int j = i + 1; j < nums.size(); ++j)
			{
				if (nums.at(i) + nums.at(j) == target)
				{
					check = true;
					temp.push_back(i);
					temp.push_back(j);

				}
			}
		}
		return temp;
	}
};